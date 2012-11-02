#
# module perror
#
 
LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE_TAGS := samples
LOCAL_SRC_FILES:= perror.c
LOCAL_MODULE := perror

include $(BUILD_EXECUTABLE)

