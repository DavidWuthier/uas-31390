#!/bin/bash

rostopic pub /vrpn_client_node/hoop$1/pose geometry_msgs/PoseStamped "header:
  seq: 0
  stamp:
    secs: 0
    nsecs: 0
  frame_id: ''
pose:
  position:
    x: $2.0
    y: $3.0
    z: $4.0
  orientation:
    x: $5.0
    y: $6.0
    z: $7.0
    w: $8.0" -r 100
