BT_ROOT := $(srctree)/techpack/bt

ccflags-y += -I$(BT_ROOT)/include
ccflags-y += -I$(BT_ROOT)/../wlan/platform/inc
ccflags-y += -I$(BT_ROOT)/../wlan/platform/cnss_utils

ifneq (,$(filter $(CONFIG_BT_HW_SECURE_DISABLE),y m))
ccflags-y += -I$(BT_ROOT)/../securemsm/smcinvoke/
ccflags-y += -I$(BT_ROOT)/../securemsm/linux/
endif

obj-$(CONFIG_MSM_BT_POWER)  += btpower.o
