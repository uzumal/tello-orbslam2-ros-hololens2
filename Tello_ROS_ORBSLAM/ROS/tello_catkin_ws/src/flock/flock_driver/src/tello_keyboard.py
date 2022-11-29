#!/usr/bin/env python
# coding: UTF-8
from __future__ import print_function

# import roslib; roslib.load_manifest('teleop_twist_keyboard')

import rospy

from geometry_msgs.msg import Twist
from std_msgs.msg import Empty, String
from sensor_msgs.msg import Image

import time
import pygame
import pygame.display
import pygame.key
import pygame.locals
import pygame.font

import random, string

import os

import datetime

from cv_bridge import CvBridge, CvBridgeError

from subprocess import Popen, PIPE


prev_flight_data = None
video_player = None
video_recorder = None
font = None
wid = None
pygame_screen = None
bridge = None
date_fmt = '%Y-%m-%d_%H%M%S'
id = None
isStop = False

# import sys, select, termios, tty
# import keyboard

msg = """
Reading from the keyboard  and Publishing to Twist!
---------------------------
Moving around:
   u    i    o
   j    k    l
   m    ,    .
For Holonomic mode (strafing), hold down the shift key:
---------------------------
   U    I    O
   J    K    L
   M    <    >
t : up (+z)
b : down (-z)
anything else : stop
q/z : increase/decrease max speeds by 10%
w/x : increase/decrease only linear speed by 10%
e/c : increase/decrease only angular speed by 10%
CTRL-C to quit
"""

# moveBindings = {
#         'i':(1,0,0,0),
#         'o':(1,0,0,-1),
#         'j':(0,0,0,1),
#         'l':(0,0,0,-1),
#         'u':(1,0,0,1),
#         ',':(-1,0,0,0),
#         '.':(-1,0,0,1),
#         'm':(-1,0,0,-1),
#         'O':(1,-1,0,0),
#         'I':(1,0,0,0),
#         'J':(0,1,0,0),
#         'L':(0,-1,0,0),
#         'U':(1,1,0,0),
#         '<':(-1,0,0,0),
#         '>':(-1,-1,0,0),
#         'M':(-1,1,0,0),
#         't':(0,0,1,0),
#         'b':(0,0,-1,0),
#     }

# speedBindings={
#         'q':(1.1,1.1),
#         'z':(.9,.9),
#         'w':(1.1,1),
#         'x':(.9,1),
#         'e':(1,1.1),
#         'c':(1,.9),
#     }

# def getKey():
#     tty.setraw(sys.stdin.fileno())
#     select.select([sys.stdin], [], [], 0)
#     keys = sys.stdin.read(1)
#     termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
#     for key in keys:
#         if key == '\x03'
#             raise KeyboardInterrupt
#         elif key == '\x1a':
#             exit()
#     return keys


# def vels(speed,turn):
#     return "currently:\tspeed %s\tturn %s " % (speed,turn)
def status_print(text):
    pygame.display.set_caption(text)

def videoFrameHandler(data):
    global video_player
    global video_recorder
    global wid
    global bridge

    try:
        data = bridge.imgmsg_to_cv2(data, "rgb8")
    except CvBridgeError as e:
        print(e)

    frame = pygame.surfarray.make_surface(data)
    frame = pygame.transform.rotate(frame, 270)
    frame = pygame.transform.flip(frame, 1, 0)

    pygame_screen.blit(frame, (0,0))
    pygame.display.update()


    # if video_player is None:
    #     cmd = [ 'mplayer', '-fps', '35', '-really-quiet' ]
    #     if wid is not None:
    #         cmd = cmd + [ '-wid', str(wid) ]
    #     video_player = Popen(cmd + ['-'], stdin=PIPE)
    #     print("Popen(cmd + ['-'], stdin=PIPE)")

    # try:
    #     video_player.stdin.write(data)
    # except IOError as err:
    #     status_print(str(err))
    #     video_player = None

    # try:
    #     if video_recorder:
    #         video_recorder.stdin.write(data)
    # except IOError as err:
    #     status_print(str(err))
    #     video_recorder = None

def set_command(keyname, twist):
    if keyname == 'w':
        twist.linear.z = 0.2
    elif keyname == 's':
        twist.linear.z = -0.2
    elif keyname == 'a':
        twist.angular.z = 0.2
    elif keyname == 'd':
        twist.angular.z = -0.2
    elif keyname == 'up':
        twist.linear.x = 0.2
    elif keyname == 'down':
        twist.linear.x = -0.2
    elif keyname == 'left':
        twist.linear.y = 0.2
    elif keyname == 'right':
        twist.linear.y = -0.2
    elif keyname == 'e':
        twist.angular.x = 1.0

    return twist

def raise_command(keyname, twist):
    if keyname == 'w':
        twist.linear.z += 0.05
    elif keyname == 's':
        twist.linear.z += -0.05
    elif keyname == 'a':
        twist.angular.z += 0.05
    elif keyname == 'd':
        twist.angular.z += -0.05
    elif keyname == 'up':
        twist.linear.x += 0.05
    elif keyname == 'down':
        twist.linear.x += -0.05
    elif keyname == 'left':
        twist.linear.y += 0.05
    elif keyname == 'right':
        twist.linear.y += -0.05
    elif keyname == 'e':
        twist.angular.x = 1.0

    return twist

def reset_command(keyname, twist):
    if keyname == 'w':
        twist.linear.z = 0.0
    elif keyname == 's':
        twist.linear.z = -0.0
    elif keyname == 'a':
        twist.angular.z = 0.0
    elif keyname == 'd':
        twist.angular.z = -0.0
    elif keyname == 'up':
        twist.linear.x = 0.0
    elif keyname == 'down':
        twist.linear.x = -0.0
    elif keyname == 'left':
        twist.linear.y = 0.0
    elif keyname == 'right':
        twist.linear.y = 0.0
    elif keyname == 'e':
        twist.angular.x = 0.0

    return twist

def limit_twist(twist):
    twist.linear.x = ((twist.linear.x > 0)*2-1) * min(abs(twist.linear.x), 0.3)
    twist.linear.y = ((twist.linear.y > 0)*2-1) * min(abs(twist.linear.y), 0.3)
    twist.angular.z = ((twist.angular.z > 0)*2-1) * min(abs(twist.angular.z), 0.3)
    twist.linear.z = ((twist.linear.z > 0)*2-1) * min(abs(twist.linear.z), 0.3)
    return twist

# def takeoff():
    # return pub_takeoff.publish()

def collision_callback(msg):
    global isStop
    isStop = True
    rospy.loginfo("Message '{}' recieved".format(msg.data))

def randstr(length):
    return ''.join([chr(random.randint(97, 122)) for _ in range(length)])

def save_file_at_dir(dir_path, filename, file_content, mode='a'):
    with open(os.path.join(dir_path, filename), mode) as f:
        f.write(str(file_content)+'\n')

if __name__=="__main__":
    # settings = termios.tcgetattr(sys.stdin)

    time.sleep(1)

    try:
	id = rospy.get_param('~ID')
    except:
	id = ''
    publish_prefix = "tello{}/".format(id)
    print('keyboard: '+ str(publish_prefix))


    pub_twist = rospy.Publisher(publish_prefix+'cmd_vel', Twist, queue_size = 1)
    pub_takeoff = rospy.Publisher(publish_prefix+'takeoff', Empty, queue_size=1)
    pub_land = rospy.Publisher(publish_prefix+'land', Empty, queue_size=1)
    # rospy.Subscriber("camera/image_raw", Image, videoFrameHandler)
    # rospy.Subscriber("/camera/image_raw", Image, videoFrameHandler)
    rospy.Subscriber('isCollision', String, collision_callback)

    pygame.init()
    pygame.display.init()
    pygame_screen = pygame.display.set_mode((960, 720))
    pygame.font.init()

    # bridge = CvBridge()

    font = pygame.font.SysFont("dejavusansmono", 32)
    if 'window' in pygame.display.get_wm_info():
        wid = pygame.display.get_wm_info()['window']
    print("Tello video WID:", wid)

    rospy.init_node('tello_keyboard')

    cmd_file_path = rospy.get_param('~CMD_FILE_PATH')
    cmd_time_file_path = rospy.get_param('~CMD_TIME_FILE_PATH')
    spent_time_file_path = rospy.get_param('~SPENT_FILE_PATH')

    twist = Twist()

    twist.linear.x = 0; twist.linear.y = 0; twist.linear.z = 0
    twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = 0
    t = time.time()

    list_of_pressed_keys = []
    list_of_cmd_keys = []
    list_of_cmd_times = []
    list_of_times_keys = []
    sum_of_keys = []

    startFlag = False
    experimentFlag = True
    colliCnt = 0
    dt_now = datetime.datetime.now()
    new_dir_path = '/home/uzu/Log/' + dt_now.strftime('%Y-%m-%d %H:%M:%S')
    os.makedirs(new_dir_path)

    try:
        while not rospy.is_shutdown():
	    if isStop:
		for keyname in list_of_pressed_keys:
                    list_of_pressed_keys.remove(keyname)
		    twist = reset_command(keyname, twist)
		    colliCnt += 1;
		    isStop = False
            	    twist = limit_twist(twist)
            	    pub_twist.publish(twist)
		    #time.sleep(1)
                    continue
	    else:
            	for keyname in list_of_pressed_keys:
                    print('raise_com: ' + keyname)
		    if startFlag:
		    	list_of_cmd_keys.append(keyname)
		    	list_of_cmd_times.append(round(time.time() - start, 1))
                    twist = raise_command(keyname, twist)
		

            for e in pygame.event.get():
                # WASD for movement
                if e.type == pygame.locals.KEYDOWN:
                    keyname = pygame.key.name(e.key)
                    print('keyname: ' + keyname)

		    if startFlag:
			# if keyname == 'up' or keyname == 'down' or keyname == 'left' or keyname == 'right'
			spentTime = time.time() - prevTime
			print("time")
			print(time.time())
			print("prevTime")
			print(prevTime)
			prevTime += spentTime
			print("spentTime")
			print(spentTime)
			list_of_times_keys.append(spentTime)

                    if keyname == 'escape':
                        # drone.quit()
			with open(cmd_file_path, 'w') as file:
			    [file.write(element+'\n') for element in list_of_cmd_keys]
			with open(cmd_time_file_path, 'w') as file:
			    [file.write(str(element)+'\n') for element in list_of_cmd_times]
			with open(spent_time_file_path, 'w') as file:
			    [file.write(str(element)+'\n') for element in list_of_times_keys]
			for element in list_of_times_keys:
			    save_file_at_dir(new_dir_path, 'spent_time_file.txt', element)
			save_file_at_dir(new_dir_path, 'command_count_file.txt', len(sum_of_keys)-2)
			print("---EXPERIMENT TIME---")
			save_file_at_dir(new_dir_path, 'experiment_time_file.txt', time.time() - experimentTime)
			print(time.time() - experimentTime)
			print("---COLLISION COUNT---")
			save_file_at_dir(new_dir_path, 'collision_count_file.txt', colliCnt)		
			print(colliCnt)
                        raise KeyboardInterrupt

                    if keyname == 'backspace':
                        pub_land.publish()
                        continue
                    elif keyname == 'tab':
                        pub_takeoff.publish()
			print("-----PLEASE PRESS RETURN-----")
			if startFlag == False:
			    start = time.time()
                        continue
		    elif keyname == 'return':
			if startFlag == False:
			    prevTime = time.time()
		    	if experimentFlag:
		    	    experimentTime = time.time()
		    	experimentFlag = False
			startFlag = True
                    else:
                        if not keyname in list_of_pressed_keys:
                            list_of_pressed_keys.append(keyname)
                            twist = set_command(keyname, twist)
                        # twist = set_command(keyname, twist)
                        

                elif  e.type == pygame.locals.KEYUP:
                    keyname = pygame.key.name(e.key)
		    sum_of_keys.append(keyname)
		    list_of_cmd_keys.append("KEYUP")
		    list_of_cmd_times.append(round(time.time() - start, 1))
                    print('-' + keyname)
                    if keyname in list_of_pressed_keys:
                        list_of_pressed_keys.remove(keyname)
                    twist = reset_command(keyname, twist)

            twist = limit_twist(twist)
            pub_twist.publish(twist)

            time.sleep(0.033)  # loop with pygame.event.get() is too mush tight w/o some sleep
            # twist.linear.x = 0; twist.linear.y = 0; twist.linear.z = 0
            # twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = 0

            # if time.time() - t > 5:
            #     twist.linear.x = 0; twist.linear.y = 0; twist.linear.z = 0
            #     twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = 0
            #     t = time.time()
        pygame.display.quit()
        pygame.quit()


    except Exception as e:
        print(e)

    finally:
        twist = Twist()
        twist.linear.x = 0; twist.linear.y = 0; twist.linear.z = 0
        twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = 0
        pub_twist.publish(twist)
        pub_land.publish()

        # termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)

