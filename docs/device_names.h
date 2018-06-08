static char * device_table[SND_DEVICE_MAX] = {
	[SND_DEVICE_NONE] = "",
	[SND_DEVICE_OUT_HANDSET] = "handset",
	[SND_DEVICE_OUT_SPEAKER] = "speaker",
	[SND_DEVICE_OUT_SPEAKER_STEREO] = "speaker-stereo",
	[SND_DEVICE_OUT_SPEAKER_EXTERNAL_1] = "speaker-ext-1",
	[SND_DEVICE_OUT_SPEAKER_EXTERNAL_2] = "speaker-ext-2",
	[SND_DEVICE_OUT_SPEAKER_VBAT] = "speaker-reverse",
	[SND_DEVICE_OUT_SPEAKER_REVERSE] = "speaker-vbat",
	[SND_DEVICE_OUT_HEADPHONES] = "line",
	[SND_DEVICE_OUT_HEADPHONES_24BIT_44P1K] = "headphones",
	[SND_DEVICE_OUT_HEADPHONES_24BIT_48K] = "headphones-hifi-24bit-44P1KHZ",
	[SND_DEVICE_OUT_HEADPHONES_24BIT_96K] = "headphones-hifi-24bit-48KHZ",
	[SND_DEVICE_OUT_HEADPHONES_24BIT_192K] = "headphones-hifi-24bit-96KHZ",
	[SND_DEVICE_OUT_HEADPHONES_16BIT_44P1K] = "headphones-hifi-24bit-192KHZ",
	[SND_DEVICE_OUT_HEADPHONES_16BIT_48K] = "headphones-hifi-16bit-44P1KHZ",
	[SND_DEVICE_OUT_HEADPHONES_16BIT_96K] = "headphones-hifi-16bit-48KHZ",
	[SND_DEVICE_OUT_HEADPHONES_16BIT_192K] = "headphones-hifi-16bit-96KHZ",
	[SND_DEVICE_OUT_HEADPHONES_44_1] = "headphones-hifi-16bit-192KHZ",
	[SND_DEVICE_OUT_LINE] = "headphones-44.1",
	[SND_DEVICE_OUT_SPEAKER_AND_HEADPHONES] = "speaker-and-headphones",
	[SND_DEVICE_OUT_SPEAKER_AND_LINE] = "speaker-and-line",
	[SND_DEVICE_OUT_SPEAKER_AND_HEADPHONES_EXTERNAL_1] = "speaker-and-headphones-ext-1",
	[SND_DEVICE_OUT_SPEAKER_AND_HEADPHONES_EXTERNAL_2] = "speaker-and-headphones-ext-2",
	[SND_DEVICE_OUT_VOICE_HANDSET] = "voice-handset",
	[SND_DEVICE_OUT_VOICE_SPEAKER] = "voice-speaker",
	[SND_DEVICE_OUT_VOICE_SPEAKER_NB] = "voice-speaker-nb",
	[SND_DEVICE_OUT_VOICE_SPEAKER_WB] = "voice-speaker-wb",
	[SND_DEVICE_OUT_VOICE_SPEAKER_STEREO] = "voice-speaker-stereo",
	[SND_DEVICE_OUT_VOICE_SPEAKER_STEREO_NB] = "voice-speaker-stereo-nb",
	[SND_DEVICE_OUT_VOICE_SPEAKER_STEREO_WB] = "voice-speaker-stereo-wb",
	[SND_DEVICE_OUT_VOICE_SPEAKER_BRIGHTNESS] = "voice-speaker-brightness",
	[SND_DEVICE_OUT_VOICE_SPEAKER_STEREO_BRIGHTNESS] = "voice-speaker-stereo-brightness",
	[SND_DEVICE_OUT_VOICE_SPEAKER_VBAT] = "voice-speaker-vbat",
	[SND_DEVICE_OUT_VOICE_HEADPHONES] = "voice-headphones",
	[SND_DEVICE_OUT_VOICE_LINE] = "voice-line",
	[SND_DEVICE_OUT_HDMI] = "hdmi",
	[SND_DEVICE_OUT_SPEAKER_AND_HDMI] = "speaker-and-hdmi",
	[SND_DEVICE_OUT_BT_SCO] = "bt-sco-headset",
	[SND_DEVICE_OUT_BT_SCO_WB] = "bt-sco-headset-wb",
	[SND_DEVICE_OUT_VOICE_TTY_FULL_HEADPHONES] = "voice-tty-full-headphones",
	[SND_DEVICE_OUT_VOICE_TTY_VCO_HEADPHONES] = "voice-tty-vco-headphones",
	[SND_DEVICE_OUT_VOICE_TTY_HCO_HANDSET] = "voice-tty-hco-handset",
	[SND_DEVICE_OUT_AFE_PROXY] = "voice-tx",
	[SND_DEVICE_OUT_USB_HEADSET] = "afe-proxy",
	[SND_DEVICE_OUT_SPEAKER_AND_USB_HEADSET] = "usb-headphones",
	[SND_DEVICE_OUT_TRANSMISSION_FM] = "speaker-and-usb-headphones",
	[SND_DEVICE_OUT_ANC_HEADSET] = "transmission-fm",
	[SND_DEVICE_OUT_ANC_FB_HEADSET] = "anc-headphones",
	[SND_DEVICE_OUT_VOICE_ANC_HEADSET] = "anc-fb-headphones",
	[SND_DEVICE_OUT_VOICE_ANC_FB_HEADSET] = "voice-anc-headphones",
	[SND_DEVICE_OUT_SPEAKER_AND_ANC_HEADSET] = "voice-anc-fb-headphones",
	[SND_DEVICE_OUT_ANC_HANDSET] = "speaker-and-anc-headphones",
	[SND_DEVICE_OUT_HAC_HANDSET] = "anc-handset",
	[SND_DEVICE_OUT_ANC_HANDSET_BRIGHTNESS] = "hac-handset",
	[SND_DEVICE_OUT_SPEAKER_PROTECTED] = "anc-handset-brightness",
	[SND_DEVICE_OUT_VOICE_SPEAKER_PROTECTED] = "speaker-protected",
	[SND_DEVICE_OUT_SPEAKER_PROTECTED_VBAT] = "voice-speaker-protected",
	[SND_DEVICE_OUT_VOICE_SPEAKER_PROTECTED_VBAT] = "speaker-protected-vbat",
	[SND_DEVICE_IN_HANDSET_MIC] = "voice-speaker-protected-vbat",
	[SND_DEVICE_IN_HANDSET_MIC_EXTERNAL] = "(null)",
	[SND_DEVICE_IN_HANDSET_MIC_AEC] = "(null)",
	[SND_DEVICE_IN_HANDSET_MIC_NS] = "handset-mic",
	[SND_DEVICE_IN_HANDSET_MIC_AEC_NS] = "handset-mic-ext",
	[SND_DEVICE_IN_HANDSET_DMIC] = "handset-mic",
	[SND_DEVICE_IN_HANDSET_DMIC_AEC] = "handset-mic",
	[SND_DEVICE_IN_HANDSET_DMIC_NS] = "handset-mic",
	[SND_DEVICE_IN_HANDSET_DMIC_AEC_NS] = "dmic-endfire",
	[SND_DEVICE_IN_SPEAKER_MIC] = "dmic-endfire",
	[SND_DEVICE_IN_SPEAKER_MIC_AEC] = "dmic-endfire",
	[SND_DEVICE_IN_SPEAKER_MIC_NS] = "dmic-endfire",
	[SND_DEVICE_IN_SPEAKER_MIC_AEC_NS] = "speaker-mic",
	[SND_DEVICE_IN_SPEAKER_STEREO_MIC] = "speaker-mic",
	[SND_DEVICE_IN_SPEAKER_DMIC] = "speaker-mic",
	[SND_DEVICE_IN_SPEAKER_DMIC_AEC] = "speaker-mic",
	[SND_DEVICE_IN_SPEAKER_DMIC_NS] = "speaker-stereo-mic",
	[SND_DEVICE_IN_SPEAKER_DMIC_AEC_NS] = "speaker-dmic-endfire",
	[SND_DEVICE_IN_HEADSET_MIC] = "speaker-dmic-endfire",
	[SND_DEVICE_IN_HEADSET_BACKMIC] = "speaker-dmic-endfire",
	[SND_DEVICE_IN_HEADSET_MIC_FLUENCE] = "speaker-dmic-endfire",
	[SND_DEVICE_IN_HEADSET_BACKMIC_FLUENCE] = "headset-mic",
	[SND_DEVICE_IN_VOICE_SPEAKER_MIC] = "headset-backmic",
	[SND_DEVICE_IN_VOICE_SPEAKER_STEREO_MIC] = "headset-mic",
	[SND_DEVICE_IN_VOICE_HEADSET_MIC] = "headset-backmic",
	[SND_DEVICE_IN_VOICE_HEADSET_BACKMIC] = "voice-speaker-mic",
	[SND_DEVICE_IN_HDMI_MIC] = "voice-speaker-stereo-mic",
	[SND_DEVICE_IN_BT_SCO_MIC] = "voice-headset-mic",
	[SND_DEVICE_IN_BT_SCO_MIC_NREC] = "voice-headset-backmic",
	[SND_DEVICE_IN_BT_SCO_MIC_WB] = "hdmi-mic",
	[SND_DEVICE_IN_BT_SCO_MIC_WB_NREC] = "bt-sco-mic",
	[SND_DEVICE_IN_CAMCORDER_MIC] = "bt-sco-mic",
	[SND_DEVICE_IN_VOICE_DMIC] = "bt-sco-mic-wb",
	[SND_DEVICE_IN_VOICE_SPEAKER_DMIC] = "bt-sco-mic-wb",
	[SND_DEVICE_IN_VOICE_SPEAKER_QMIC] = "camcorder-mic",
	[SND_DEVICE_IN_VOICE_TTY_FULL_HEADSET_MIC] = "voice-dmic-ef",
	[SND_DEVICE_IN_VOICE_TTY_VCO_HANDSET_MIC] = "voice-speaker-dmic-ef",
	[SND_DEVICE_IN_VOICE_TTY_HCO_HEADSET_MIC] = "voice-speaker-qmic",
	[SND_DEVICE_IN_VOICE_REC_MIC] = "voice-tty-full-headset-mic",
	[SND_DEVICE_IN_AUDIO_REC_MIC] = "voice-tty-vco-handset-mic",
	[SND_DEVICE_IN_VOICE_REC_MIC_NS] = "voice-tty-hco-headset-mic",
	[SND_DEVICE_IN_VOICE_REC_DMIC_STEREO] = "voice-rec-mic",
	[SND_DEVICE_IN_VOICE_REC_DMIC_FLUENCE] = "audio-rec-mic",
	[SND_DEVICE_IN_USB_HEADSET_MIC] = "voice-rec-mic",
	[SND_DEVICE_IN_CAPTURE_FM] = "voice-rec-dmic-ef",
	[SND_DEVICE_IN_AANC_HANDSET_MIC] = "voice-rec-dmic-ef-fluence",
	[SND_DEVICE_IN_QUAD_MIC] = "voice-rx",
	[SND_DEVICE_IN_HANDSET_STEREO_DMIC] = "usb-headset-mic",
	[SND_DEVICE_IN_SPEAKER_STEREO_DMIC] = "capture-fm",
	[SND_DEVICE_IN_CAPTURE_VI_FEEDBACK] = "aanc-handset-mic",
	[SND_DEVICE_IN_VOICE_SPEAKER_DMIC_BROADSIDE] = "quad-mic",
	[SND_DEVICE_IN_SPEAKER_DMIC_BROADSIDE] = "handset-stereo-dmic-ef",
	[SND_DEVICE_IN_SPEAKER_DMIC_AEC_BROADSIDE] = "speaker-stereo-dmic-ef",
	[SND_DEVICE_IN_SPEAKER_DMIC_NS_BROADSIDE] = "vi-feedback",
	[SND_DEVICE_IN_SPEAKER_DMIC_AEC_NS_BROADSIDE] = "voice-speaker-dmic-broadside",
	[SND_DEVICE_IN_HANDSET_QMIC] = "speaker-dmic-broadside",
	[SND_DEVICE_IN_SPEAKER_QMIC_AEC] = "speaker-dmic-broadside",
	[SND_DEVICE_IN_SPEAKER_QMIC_NS] = "speaker-dmic-broadside",
	[SND_DEVICE_IN_SPEAKER_QMIC_AEC_NS] = "speaker-dmic-broadside",
	[SND_DEVICE_IN_TEST_MAIN_MIC] = "quad-mic",
	[SND_DEVICE_IN_TEST_RECEIVER_MIC] = "quad-mic",
	[SND_DEVICE_IN_TEST_BACK_MIC] = "quad-mic",
	[SND_DEVICE_IN_QUAD_FLUENCE_MIC] = "quad-mic",
};
