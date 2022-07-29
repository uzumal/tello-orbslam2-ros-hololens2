# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from flock_msgs/FlightData.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class FlightData(genpy.Message):
  _md5sum = "1fbfcd738c3afa96d840f05b5d17f7de"
  _type = "flock_msgs/FlightData"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Flight data -- experimental -- will change as we learn more
# Gobot code seems to be the best reference

# Battery state:
int32 battery_percent                     # Remaining battery, 0-100
float32 estimated_flight_time_remaining   # Remaining flight time, seconds

# Flight modes:
uint8 flight_mode_ground=1          # Motors off
uint8 flight_mode_hover=6           # Hovering
uint8 flight_mode_taking_off=11     # Taking off
uint8 flight_mode_landing=12        # Landing
uint8 flight_mode_spinning_up=41    # Spinning up the props, will take off soon
uint8 flight_mode

# Flight time:
float32 flight_time                 # Flight time since power up, in seconds

# Position and velocity, negative numbers mean "no data":
float32 east_speed                  # meters/second
float32 north_speed                 # meters/second
float32 ground_speed                # meters/second
float32 altitude                    # Height off the ground in meters

# Equipment status:
int32 equipment_ok=0                # Everything is OK
int32 equipment_unstable=21         # The drone is unstable, tilted at an odd angle or upside down
int32 equipment_timer_exceeded=205  # No input for 15 seconds, shutting down
int32 equipment

# Temperature:
bool high_temperature               # It's getting warm in here

# ???
bool em_ground                      # ???
bool em_open                        # ???
bool em_sky                         # ???


float32 pitch
float32 roll
float32 yaw
float32 agx
float32 agy
float32 agz"""
  # Pseudo-constants
  flight_mode_ground = 1
  flight_mode_hover = 6
  flight_mode_taking_off = 11
  flight_mode_landing = 12
  flight_mode_spinning_up = 41
  equipment_ok = 0
  equipment_unstable = 21
  equipment_timer_exceeded = 205

  __slots__ = ['battery_percent','estimated_flight_time_remaining','flight_mode','flight_time','east_speed','north_speed','ground_speed','altitude','equipment','high_temperature','em_ground','em_open','em_sky','pitch','roll','yaw','agx','agy','agz']
  _slot_types = ['int32','float32','uint8','float32','float32','float32','float32','float32','int32','bool','bool','bool','bool','float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       battery_percent,estimated_flight_time_remaining,flight_mode,flight_time,east_speed,north_speed,ground_speed,altitude,equipment,high_temperature,em_ground,em_open,em_sky,pitch,roll,yaw,agx,agy,agz

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(FlightData, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.battery_percent is None:
        self.battery_percent = 0
      if self.estimated_flight_time_remaining is None:
        self.estimated_flight_time_remaining = 0.
      if self.flight_mode is None:
        self.flight_mode = 0
      if self.flight_time is None:
        self.flight_time = 0.
      if self.east_speed is None:
        self.east_speed = 0.
      if self.north_speed is None:
        self.north_speed = 0.
      if self.ground_speed is None:
        self.ground_speed = 0.
      if self.altitude is None:
        self.altitude = 0.
      if self.equipment is None:
        self.equipment = 0
      if self.high_temperature is None:
        self.high_temperature = False
      if self.em_ground is None:
        self.em_ground = False
      if self.em_open is None:
        self.em_open = False
      if self.em_sky is None:
        self.em_sky = False
      if self.pitch is None:
        self.pitch = 0.
      if self.roll is None:
        self.roll = 0.
      if self.yaw is None:
        self.yaw = 0.
      if self.agx is None:
        self.agx = 0.
      if self.agy is None:
        self.agy = 0.
      if self.agz is None:
        self.agz = 0.
    else:
      self.battery_percent = 0
      self.estimated_flight_time_remaining = 0.
      self.flight_mode = 0
      self.flight_time = 0.
      self.east_speed = 0.
      self.north_speed = 0.
      self.ground_speed = 0.
      self.altitude = 0.
      self.equipment = 0
      self.high_temperature = False
      self.em_ground = False
      self.em_open = False
      self.em_sky = False
      self.pitch = 0.
      self.roll = 0.
      self.yaw = 0.
      self.agx = 0.
      self.agy = 0.
      self.agz = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_ifB5fi4B6f().pack(_x.battery_percent, _x.estimated_flight_time_remaining, _x.flight_mode, _x.flight_time, _x.east_speed, _x.north_speed, _x.ground_speed, _x.altitude, _x.equipment, _x.high_temperature, _x.em_ground, _x.em_open, _x.em_sky, _x.pitch, _x.roll, _x.yaw, _x.agx, _x.agy, _x.agz))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 61
      (_x.battery_percent, _x.estimated_flight_time_remaining, _x.flight_mode, _x.flight_time, _x.east_speed, _x.north_speed, _x.ground_speed, _x.altitude, _x.equipment, _x.high_temperature, _x.em_ground, _x.em_open, _x.em_sky, _x.pitch, _x.roll, _x.yaw, _x.agx, _x.agy, _x.agz,) = _get_struct_ifB5fi4B6f().unpack(str[start:end])
      self.high_temperature = bool(self.high_temperature)
      self.em_ground = bool(self.em_ground)
      self.em_open = bool(self.em_open)
      self.em_sky = bool(self.em_sky)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_ifB5fi4B6f().pack(_x.battery_percent, _x.estimated_flight_time_remaining, _x.flight_mode, _x.flight_time, _x.east_speed, _x.north_speed, _x.ground_speed, _x.altitude, _x.equipment, _x.high_temperature, _x.em_ground, _x.em_open, _x.em_sky, _x.pitch, _x.roll, _x.yaw, _x.agx, _x.agy, _x.agz))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 61
      (_x.battery_percent, _x.estimated_flight_time_remaining, _x.flight_mode, _x.flight_time, _x.east_speed, _x.north_speed, _x.ground_speed, _x.altitude, _x.equipment, _x.high_temperature, _x.em_ground, _x.em_open, _x.em_sky, _x.pitch, _x.roll, _x.yaw, _x.agx, _x.agy, _x.agz,) = _get_struct_ifB5fi4B6f().unpack(str[start:end])
      self.high_temperature = bool(self.high_temperature)
      self.em_ground = bool(self.em_ground)
      self.em_open = bool(self.em_open)
      self.em_sky = bool(self.em_sky)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_ifB5fi4B6f = None
def _get_struct_ifB5fi4B6f():
    global _struct_ifB5fi4B6f
    if _struct_ifB5fi4B6f is None:
        _struct_ifB5fi4B6f = struct.Struct("<ifB5fi4B6f")
    return _struct_ifB5fi4B6f
