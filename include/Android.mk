LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_COPY_HEADERS_TO := ../vendor/qcom/opensource/audio-kernel/include/soc
LOCAL_COPY_HEADERS    := soc/bg_glink.h \
                         soc/internal.h \
                         soc/soundwire.h \
                         soc/swr-wcd.h

include $(BUILD_COPY_HEADERS)

include $(CLEAR_VARS)
LOCAL_COPY_HEADERS_TO := ../vendor/qcom/opensource/audio-kernel/include/linux
LOCAL_COPY_HEADERS    := uapi/linux/msm_audio_ac3.h \
                         uapi/linux/msm_audio_wmapro.h \
                         uapi/linux/msm_audio_qcp.h \
                         uapi/linux/msm_audio_mvs.h \
                         uapi/linux/msm_audio_alac.h \
                         uapi/linux/msm_audio_calibration.h \
                         uapi/linux/msm_audio_g711.h \
                         uapi/linux/msm_audio_ape.h \
                         uapi/linux/msm_audio_g711_dec.h \
                         uapi/linux/msm_audio_sbc.h \
                         uapi/linux/msm_audio_wma.h \
                         uapi/linux/avtimer.h \
                         uapi/linux/msm_audio_amrnb.h \
                         uapi/linux/msm_audio_amrwbplus.h \
                         uapi/linux/msm_audio.h \
                         uapi/linux/msm_audio_aac.h \
                         uapi/linux/msm_audio_amrwb.h \
                         uapi/linux/msm_audio_voicememo.h

include $(BUILD_COPY_HEADERS)

include $(CLEAR_VARS)
LOCAL_COPY_HEADERS_TO := ../vendor/qcom/opensource/audio-kernel/include/sound
LOCAL_COPY_HEADERS    := \
                         uapi/sound/msmcal-hwdep.h \
                         uapi/sound/lsm_params.h \
                         uapi/sound/devdep_params.h \
                         uapi/sound/wcd-dsp-glink.h \
                         uapi/sound/audio_slimslave.h \
                         uapi/sound/audio_effects.h \
                         uapi/sound/voice_params.h

include $(BUILD_COPY_HEADERS)
