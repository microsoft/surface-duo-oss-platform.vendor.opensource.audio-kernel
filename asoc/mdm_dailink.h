/*
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 */

#include <sound/soc.h>

/* FE dai-links */
SND_SOC_DAILINK_DEFS(multimedia1,
	DAILINK_COMP_ARRAY(COMP_CPU("MultiMedia1")),
	DAILINK_COMP_ARRAY(COMP_CODEC("snd-soc-dummy", "snd-soc-dummy-dai")),
	DAILINK_COMP_ARRAY(COMP_PLATFORM("msm-pcm-dsp.0")));

SND_SOC_DAILINK_DEFS(multimedia2,
	DAILINK_COMP_ARRAY(COMP_CPU("MultiMedia2")),
	DAILINK_COMP_ARRAY(COMP_CODEC("snd-soc-dummy", "snd-soc-dummy-dai")),
	DAILINK_COMP_ARRAY(COMP_PLATFORM("msm-pcm-dsp.0")));

SND_SOC_DAILINK_DEFS(multimedia3,
	DAILINK_COMP_ARRAY(COMP_CPU("MultiMedia3")),
	DAILINK_COMP_ARRAY(COMP_CODEC("snd-soc-dummy", "snd-soc-dummy-dai")),
	DAILINK_COMP_ARRAY(COMP_PLATFORM("msm-pcm-dsp.2")));

SND_SOC_DAILINK_DEFS(afepcm_rx,
	DAILINK_COMP_ARRAY(COMP_CPU("msm-dai-q6-dev.241")),
	DAILINK_COMP_ARRAY(COMP_CODEC("msm-stub-codec.1", "msm-stub-rx")),
	DAILINK_COMP_ARRAY(COMP_PLATFORM("msm-pcm-afe")));

SND_SOC_DAILINK_DEFS(afepcm_tx,
	DAILINK_COMP_ARRAY(COMP_CPU("msm-dai-q6-dev.240")),
	DAILINK_COMP_ARRAY(COMP_CODEC("msm-stub-codec.1", "msm-stub-tx")),
	DAILINK_COMP_ARRAY(COMP_PLATFORM("msm-pcm-afe")));

SND_SOC_DAILINK_DEFS(auxpcm_hostless,
	DAILINK_COMP_ARRAY(COMP_CPU("AUXPCM_HOSTLESS")),
	DAILINK_COMP_ARRAY(COMP_CODEC("snd-soc-dummy", "snd-soc-dummy-dai")),
	DAILINK_COMP_ARRAY(COMP_PLATFORM("msm-pcm-hostless")));

SND_SOC_DAILINK_DEFS(multimedia6,
	DAILINK_COMP_ARRAY(COMP_CPU("MultiMedia6")),
	DAILINK_COMP_ARRAY(COMP_CODEC("snd-soc-dummy", "snd-soc-dummy-dai")),
	DAILINK_COMP_ARRAY(COMP_PLATFORM("msm-pcm-loopback")));

SND_SOC_DAILINK_DEFS(pri_tdm_rx_0_hostless,
	DAILINK_COMP_ARRAY(COMP_CPU("PRI_TDM_RX_0_HOSTLESS")),
	DAILINK_COMP_ARRAY(COMP_CODEC("snd-soc-dummy", "snd-soc-dummy-dai")),
	DAILINK_COMP_ARRAY(COMP_PLATFORM("msm-pcm-hostless")));

SND_SOC_DAILINK_DEFS(pri_tdm_tx_0_hostless,
	DAILINK_COMP_ARRAY(COMP_CPU("PRI_TDM_TX_0_HOSTLESS")),
	DAILINK_COMP_ARRAY(COMP_CODEC("snd-soc-dummy", "snd-soc-dummy-dai")),
	DAILINK_COMP_ARRAY(COMP_PLATFORM("msm-pcm-hostless")));

SND_SOC_DAILINK_DEFS(sec_tdm_rx_0_hostless,
	DAILINK_COMP_ARRAY(COMP_CPU("SEC_TDM_RX_0_HOSTLESS")),
	DAILINK_COMP_ARRAY(COMP_CODEC("snd-soc-dummy", "snd-soc-dummy-dai")),
	DAILINK_COMP_ARRAY(COMP_PLATFORM("msm-pcm-hostless")));

SND_SOC_DAILINK_DEFS(sec_tdm_tx_0_hostless,
	DAILINK_COMP_ARRAY(COMP_CPU("SEC_TDM_TX_0_HOSTLESS")),
	DAILINK_COMP_ARRAY(COMP_CODEC("snd-soc-dummy", "snd-soc-dummy-dai")),
	DAILINK_COMP_ARRAY(COMP_PLATFORM("msm-pcm-hostless")));

SND_SOC_DAILINK_DEFS(dtmf_rx_hostless,
	DAILINK_COMP_ARRAY(COMP_CPU("DTMF_RX_HOSTLESS")),
	DAILINK_COMP_ARRAY(COMP_CODEC("snd-soc-dummy", "snd-soc-dummy-dai")),
	DAILINK_COMP_ARRAY(COMP_PLATFORM("msm-pcm-dtmf")));

/* BE dai-links */
SND_SOC_DAILINK_DEFS(sec_mi2s_rx,
	DAILINK_COMP_ARRAY(COMP_CPU("msm-dai-q6-mi2s.1")),
	DAILINK_COMP_ARRAY(COMP_CODEC("msm-stub-codec.1", "msm-stub-rx")),
	DAILINK_COMP_ARRAY(COMP_PLATFORM("msm-pcm-routing")));

SND_SOC_DAILINK_DEFS(sec_mi2s_tx,
	DAILINK_COMP_ARRAY(COMP_CPU("msm-dai-q6-mi2s.1")),
	DAILINK_COMP_ARRAY(COMP_CODEC("msm-stub-codec.1", "msm-stub-tx")),
	DAILINK_COMP_ARRAY(COMP_PLATFORM("msm-pcm-routing")));

SND_SOC_DAILINK_DEFS(pri_mi2s_rx_hostless,
	DAILINK_COMP_ARRAY(COMP_CPU("PRI_MI2S_RX_HOSTLESS")),
	DAILINK_COMP_ARRAY(COMP_CODEC("snd-soc-dummy", "snd-soc-dummy-dai")),
	DAILINK_COMP_ARRAY(COMP_PLATFORM("msm-pcm-hostless")));

SND_SOC_DAILINK_DEFS(pri_mi2s_tx_hostless,
	DAILINK_COMP_ARRAY(COMP_CPU("PRI_MI2S_TX_HOSTLESS")),
	DAILINK_COMP_ARRAY(COMP_CODEC("snd-soc-dummy", "snd-soc-dummy-dai")),
	DAILINK_COMP_ARRAY(COMP_PLATFORM("msm-pcm-hostless")));

SND_SOC_DAILINK_DEFS(sec_mi2s_rx_hostless,
	DAILINK_COMP_ARRAY(COMP_CPU("SEC_MI2S_RX_HOSTLESS")),
	DAILINK_COMP_ARRAY(COMP_CODEC("snd-soc-dummy", "snd-soc-dummy-dai")),
	DAILINK_COMP_ARRAY(COMP_PLATFORM("msm-pcm-hostless")));

SND_SOC_DAILINK_DEFS(tasha_i2s_rx1,
	DAILINK_COMP_ARRAY(COMP_CPU("msm-dai-q6-mi2s.0")),
	DAILINK_COMP_ARRAY(COMP_CODEC("tasha_codec", "tasha_i2s_rx1"),
			COMP_CODEC("wsa-codec.1", "wsa_rx1")),
	DAILINK_COMP_ARRAY(COMP_PLATFORM("msm-pcm-routing")));

SND_SOC_DAILINK_DEFS(tasha_i2s_tx1,
	DAILINK_COMP_ARRAY(COMP_CPU("msm-dai-q6-mi2s.0")),
	DAILINK_COMP_ARRAY(COMP_CODEC("tasha_codec", "tasha_i2s_tx1")),
	DAILINK_COMP_ARRAY(COMP_PLATFORM("msm-pcm-routing")));
