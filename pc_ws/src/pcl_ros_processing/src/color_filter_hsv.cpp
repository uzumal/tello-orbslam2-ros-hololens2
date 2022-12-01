#include <ros/ros.h>
// PCL specific includes
#include <sensor_msgs/PointCloud2.h>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/point_types_conversion.h>
#include <pcl/sample_consensus/model_types.h>
#include <pcl/sample_consensus/method_types.h>
#include <pcl/segmentation/sac_segmentation.h>
#include <pcl_ros/point_cloud.h>

ros::Publisher pub;

void
cloud_cb (const sensor_msgs::PointCloud2ConstPtr& input)
{
  // Define PointCloud2 data
  pcl::PointCloud<pcl::PointXYZRGBA> in_cloud, out_cloud;
  // Convert the sensor_msgs/PointCloud2 data to pcl/PointCloud
  pcl::fromROSMsg (*input, in_cloud);

  // setting alpha = 1.0
  for (size_t i = 0; i < in_cloud.points.size(); ++i){
    in_cloud.points[i].a = 255;
  }

  // set frame id
  out_cloud.header.frame_id = in_cloud.header.frame_id;
  // std::cerr << "in_cloud frame id=" << in_cloud.header.frame_id << std::endl;

  // convert rgb to hsv
  pcl::PointCloud<pcl::PointXYZHSV> hsv_cloud;
  pcl::PointCloudXYZRGBAtoXYZHSV(in_cloud, hsv_cloud);

  // color parameter
  int max_h, min_h, max_s, min_s, max_v, min_v;

  ros::param::get("max_h", max_h);
  ros::param::get("min_h", min_h);
  ros::param::get("max_s", max_s);
  ros::param::get("min_s", min_s);
  ros::param::get("max_v", max_v);
  ros::param::get("min_v", min_v);

  // color filter
  if(max_h > min_h){
    for (size_t i = 0; i < in_cloud.points.size(); ++i){
      if (hsv_cloud.points[i].h > min_h && hsv_cloud.points[i].h < max_h &&
          hsv_cloud.points[i].s > min_s && hsv_cloud.points[i].s < max_s &&
          hsv_cloud.points[i].v > min_v && hsv_cloud.points[i].v < max_v
         ){
        out_cloud.push_back(in_cloud.points[i]);
      }
    }
  }

  if(max_h < min_h){
    for (size_t i = 0; i < in_cloud.points.size(); ++i){
      if ((hsv_cloud.points[i].h > min_h && hsv_cloud.points[i].h < 255) || (hsv_cloud.points[i].h < max_h && hsv_cloud.points[i].h > 0) &&
          hsv_cloud.points[i].s > min_s && hsv_cloud.points[i].s < max_s &&
          hsv_cloud.points[i].v > min_v && hsv_cloud.points[i].v < max_v
         ){
        out_cloud.push_back(in_cloud.points[i]);
      }
    }
  }


  // publish ros msg
  sensor_msgs::PointCloud2 output;
  if(out_cloud.size() > 0){
    toROSMsg(out_cloud, output);
    pub.publish(output);
    // save pcd file
    pcl::io::savePCDFileASCII ("save.pcd", out_cloud);
  }
}

int
main (int argc, char** argv)
{
  // Initialize ROS
  ros::init (argc, argv, "color_filter_hsv");
  ros::NodeHandle nh;

  ros::param::set("max_h", 255);
  ros::param::set("min_h", 0);
  ros::param::set("max_s", 255);
  ros::param::set("min_s", 0);
  ros::param::set("max_v", 255);
  ros::param::set("min_v", 0);

  // Create a ROS subscriber for the input point cloud
  ros::Subscriber sub = nh.subscribe ("input", 1, cloud_cb);

  // Create a ROS publisher for the model coefficients
  pub = nh.advertise<pcl::PointCloud<pcl::PointXYZRGBA> > ("color_filter", 1);
  // Spin
  ros::spin ();
}
