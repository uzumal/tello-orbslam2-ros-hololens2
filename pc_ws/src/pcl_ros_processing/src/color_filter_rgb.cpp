#include <ros/ros.h>
// PCL specific includes
#include <sensor_msgs/PointCloud2.h>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
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

  // color parameter
  int max_r, min_r, max_g, min_g, max_b, min_b;

  ros::param::get("max_r", max_r);
  ros::param::get("min_r", min_r);
  ros::param::get("max_g", max_g);
  ros::param::get("min_g", min_g);
  ros::param::get("max_b", max_b);
  ros::param::get("min_b", min_b);

  // color filter
  for (size_t i = 0; i < in_cloud.points.size(); ++i){
    if (in_cloud.points[i].r > min_r && in_cloud.points[i].r < max_r &&
        in_cloud.points[i].g > min_g && in_cloud.points[i].g < max_g &&
        in_cloud.points[i].b > min_b && in_cloud.points[i].b < max_b
        ){
      out_cloud.push_back(in_cloud.points[i]);
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
  ros::init (argc, argv, "color_filter_rgb");
  ros::NodeHandle nh;

  ros::param::set("max_r", 255);
  ros::param::set("min_r", 0);
  ros::param::set("max_g", 255);
  ros::param::set("min_g", 0);
  ros::param::set("max_b", 255);
  ros::param::set("min_b", 0);

  // Create a ROS subscriber for the input point cloud
  ros::Subscriber sub = nh.subscribe ("input", 1, cloud_cb);

  // Create a ROS publisher for the model coefficients
  pub = nh.advertise<pcl::PointCloud<pcl::PointXYZRGBA> > ("color_filter", 1);
  // Spin
  ros::spin ();
}
