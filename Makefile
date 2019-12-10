target = appletv:10.1
THEOS_DEVICE_IP=guest-room.local
DEBUG=1
INSTALL_TARGET_PROCESSES = TVSystemMenuService 

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = TVControlCenter

TVControlCenter_FILES = TVControlCenter.x
TVControlCenter_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk
SUBPROJECTS += HWBundle
include $(THEOS_MAKE_PATH)/aggregate.mk
