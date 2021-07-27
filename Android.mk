# Android makefile for audio kernel modules
MY_LOCAL_PATH := $(call my-dir)

ifneq ($(BOARD_OPENSOURCE_DIR), )
   UAPI_OUT := $(PRODUCT_OUT)/obj/$(BOARD_OPENSOURCE_DIR)/audio-kernel/include
   AUDIO_KERNEL_OUT := $(PRODUCT_OUT)/obj/$(BOARD_OPENSOURCE_DIR)/audio-kernel
else
   UAPI_OUT := $(PRODUCT_OUT)/obj/vendor/qcom/opensource/audio-kernel/include
   AUDIO_KERNEL_OUT := $(PRODUCT_OUT)/obj/vendor/qcom/opensource/audio-kernel/
endif # BOARD_OPENSOURCE_DIR

ifeq ($(call is-board-platform-in-list,msm8953 msm8937 sdm845 sdm670 qcs605 sdmshrike msmnile $(MSMSTEPPE) atoll $(TRINKET)),true)
$(shell mkdir -p $(UAPI_OUT)/linux;)
$(shell mkdir -p $(UAPI_OUT)/sound;)
$(shell rm -rf $(AUDIO_KERNEL_OUT)/ipc/Module.symvers)
$(shell rm -rf $(AUDIO_KERNEL_OUT)/dsp/Module.symvers)
$(shell rm -rf $(AUDIO_KERNEL_OUT)/dsp/codecs/Module.symvers)
$(shell rm -rf $(AUDIO_KERNEL_OUT)/soc/Module.symvers)
$(shell rm -rf $(AUDIO_KERNEL_OUT)/asoc/Module.symvers)
$(shell rm -rf $(AUDIO_KERNEL_OUT)/asoc/codecs/Module.symvers)
$(shell rm -rf $(AUDIO_KERNEL_OUT)/asoc/codecs/wcd934x/Module.symvers)

include $(MY_LOCAL_PATH)/include/uapi/Android.mk
include $(MY_LOCAL_PATH)/ipc/Android.mk
include $(MY_LOCAL_PATH)/dsp/Android.mk

include $(MY_LOCAL_PATH)/dsp/codecs/Android.mk

include $(MY_LOCAL_PATH)/soc/Android.mk
include $(MY_LOCAL_PATH)/asoc/Android.mk
include $(MY_LOCAL_PATH)/asoc/codecs/Android.mk

ifneq ($(TARGET_BOARD_AUTO),true)
$(shell rm -rf $(AUDIO_KERNEL_OUT)/asoc/codecs/wcd934x/Module.symvers)
include $(MY_LOCAL_PATH)/asoc/codecs/wcd934x/Android.mk
endif
endif

ifeq ($(call is-board-platform-in-list,sdm670 sdmshrike msmnile),true)
ifneq ($(TARGET_BOARD_AUTO),true)
$(shell rm -rf $(AUDIO_KERNEL_OUT)/asoc/codecs/aqt1000/Module.symvers)
include $(MY_LOCAL_PATH)/asoc/codecs/aqt1000/Android.mk
endif
endif

ifeq ($(call is-board-platform-in-list,$(MSMSTEPPE) atoll $(TRINKET)),true)
ifneq ($(TARGET_BOARD_AUTO),true)
$(shell rm -rf $(AUDIO_KERNEL_OUT)/asoc/codecs/bolero/Module.symvers)
include $(MY_LOCAL_PATH)/asoc/codecs/bolero/Android.mk
$(shell rm -rf $(AUDIO_KERNEL_OUT)/asoc/codecs/wcd937x/Module.symvers)
include $(MY_LOCAL_PATH)/asoc/codecs/wcd937x/Android.mk
endif
endif

ifeq ($(call is-board-platform-in-list,msm8953 msm8937 sdm670 qcs605),true)
$(shell rm -rf $(AUDIO_KERNEL_OUT)/asoc/codecs/sdm660_cdc/Module.symvers)
$(shell rm -rf $(AUDIO_KERNEL_OUT)/asoc/codecs/msm_sdw/Module.symvers)
include $(MY_LOCAL_PATH)/asoc/codecs/sdm660_cdc/Android.mk
include $(MY_LOCAL_PATH)/asoc/codecs/msm_sdw/Android.mk
endif

ifeq ($(call is-board-platform-in-list,sdmshrike msmnile),true)
ifneq ($(TARGET_BOARD_AUTO),true)
$(shell rm -rf $(PRODUCT_OUT)/obj/vendor/qcom/opensource/audio-kernel/asoc/codecs/wcd9360/Module.symvers)
include $(MY_LOCAL_PATH)/asoc/codecs/wcd9360/Android.mk
endif
endif

ifneq ($(BOARD_OPENSOURCE_DIR), )
$(shell rm -fr $(MY_LOCAL_PATH)/soc/core.h)
$(shell ln -s ${shell pwd}/$(TARGET_KERNEL_SOURCE)/drivers/pinctrl/core.h $(MY_LOCAL_PATH)/soc/core.h)
$(shell rm -fr $(MY_LOCAL_PATH)/include/soc/internal.h)
$(shell ln -s ${shell pwd}/$(TARGET_KERNEL_SOURCE)/drivers/base/regmap/internal.h $(MY_LOCAL_PATH)/include/soc/internal.h)
$(shell rm -fr $(MY_LOCAL_PATH)/soc/pinctrl-utils.h)
$(shell ln -s ${shell pwd}/$(TARGET_KERNEL_SOURCE)/drivers/pinctrl/pinctrl-utils.h $(MY_LOCAL_PATH)/soc/pinctrl-utils.h)
endif # BOARD_OPENSOURCE_DIR
