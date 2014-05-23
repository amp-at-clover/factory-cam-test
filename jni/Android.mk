LOCAL_PATH := $(call my-dir)\

include $(CLEAR_VARS)

LOCAL_ARM_NEON := true

include jni/cam_test/Android.mk

#APP_OPTIM := debug
