LOCAL_PATH := $(call my-dir)

# Qualcomm XML Files

include $(CLEAR_VARS)
LOCAL_MODULE       := dsi_config.xml
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := data/dsi_config.xml
LOCAL_MODULE_PATH  := $(TARGET_OUT_ETC)/data
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := netmgr_config.xml
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := data/netmgr_config.xml
LOCAL_MODULE_PATH  := $(TARGET_OUT_ETC)/data
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := qmi_config.xml
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := data/qmi_config.xml
LOCAL_MODULE_PATH  := $(TARGET_OUT_ETC)/data
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := qdcm_calib_data_le_x2_mdss_dsi_sharp_qhd_dualdsi_cmd.xml
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := qdcm/qdcm_calib_data_le_x2_mdss_dsi_sharp_qhd_dualdsi_cmd.xml
LOCAL_MODULE_PATH  := $(TARGET_OUT_ETC)
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := qdcm_calib_data_le_x2_mdss_dsi_truly_qhd_dualdsi_cmd_pvt.xml
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := qdcm/qdcm_calib_data_le_x2_mdss_dsi_truly_qhd_dualdsi_cmd_pvt.xml
LOCAL_MODULE_PATH  := $(TARGET_OUT_ETC)
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := qdcm_calib_data_mdss_dsi_sharp_qhd_dualdsi_cmd.xml
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := qdcm/qdcm_calib_data_mdss_dsi_sharp_qhd_dualdsi_cmd.xml
LOCAL_MODULE_PATH  := $(TARGET_OUT_ETC)
include $(BUILD_PREBUILT)
