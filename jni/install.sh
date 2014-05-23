#!/bin/sh
adb push ../libs/armeabi-v7a/libnative_camera_r4.4.0.so /data/
adb push ../libs/armeabi-v7a/cam_test /data/cam_test
adb shell chmod 755 /data/cam_test
