/**
 * @file    ros2_pub_sub.hpp
 * @author  Shivang Patel
 * @copyright   MIT License (c) 2019 Shivang Patel
 * 
 * @brief DESCRIPTION
 * This header file contains class declaration of ROS2 one node Publisher and
 * Subscriber.
 * 
 * Copyright 2019 Shivang Patel
 * Permission is hereby granted, free of charge, to any person obtaining a copy 
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 * 
 */

#pragma once

#include<rclcpp/rclcpp.hpp>
#include<std_msgs/msg/string.hpp>

/**
 * @brief   Class which implements ROS2 publisher and Subscriber in one node.
 */
class Ros2PubSub:public rclcpp::Node{
public:
    /**
     * @brief   This is a default constructor of this class.
     * 
     * @params[in]  None
     * 
     * @return  None
     */
    Ros2PubSub();

private:
    /**
     * @brief   This method publishes data. This method will be bind to this
     * class's object, so every time the object is called this method will
     * be called too.
     * 
     * @params[in]  Void
     * 
     * @return  Void
     */
    void publisher_function(void);
    /**
     * @brief   This is a callback method for subscriber.
     * 
     * @params[in]  std_msgs::msg::String::SharedPtr Message which is recieved 
     * by the subscriber.
     * 
     * @return  Void
     */
    void subscriber_callback(const std_msgs::msg::String::SharedPtr msg);
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr Pub_;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr Sub_;
    rclcpp::TimerBase::SharedPtr timer_;
};