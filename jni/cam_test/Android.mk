LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
OPENCV_LIB_TYPE:=STATIC
OPENCV_CAMERA_MODULES:=on
OPENCV_INSTALL_MODULES:=on
include $(OPENCV_PACKAGE_DIR)/sdk/native/jni/OpenCV.mk

include $(CLEAR_VARS)
LOCAL_MODULE := libnative_camera
LOCAL_SRC_FILES = $(OPENCV_PACKAGE_DIR)/sdk/native/libs/$(TARGET_ARCH_ABI)/libnative_camera_r4.4.0.so
LOCAL_EXPORT_C_INCLUDES := $(OPENCV_PACKAGE_DIR)/sdk/native/jni/include
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
OPENCV_LIB_TYPE:=STATIC
OPENCV_CAMERA_MODULES:=on
OPENCV_INSTALL_MODULES:=on
include $(OPENCV_PACKAGE_DIR)/sdk/native/jni/OpenCV.mk

LOCAL_CFLAGS := -O3 -I$(LOCAL_PATH)/../ -D USE_OPENCV -I$(OPENCV_PACKAGE_DIR)/sdk/native/jni/include

LOCAL_MODULE    := cam_test

LOCAL_SRC_FILES := factory_cam_test.cpp

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/ $(OPENCV_PACKAGE_DIR)/sdk/native
LOCAL_STATIC_LIBRARIES := libnative_camera_r4.4.0.so

include $(BUILD_EXECUTABLE)
