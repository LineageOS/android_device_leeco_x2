# Copyright (C) 2016 The CyanogenMod Project
# Copyright (C) 2017-2018 The The LineageOS Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit from device
$(call inherit-product, device/leeco/x2/device.mk)

# Inherit some common LineageOS stuff.
$(call inherit-product, vendor/lineage/config/common_full_phone.mk)

PRODUCT_NAME := lineage_x2
PRODUCT_DEVICE := x2
PRODUCT_MANUFACTURER := LeEco
PRODUCT_BRAND := LeEco

PRODUCT_GMS_CLIENTID_BASE := android-leeco

PRODUCT_BUILD_PROP_OVERRIDES += \
    TARGET_DEVICE=le_x2 \
    PRODUCT_NAME=LeMax2_WW \
    PRIVATE_BUILD_DESC="le_x2-user 6.0.1 FKXOSOP5801910311S eng.letv.20161031.012138.wechatpay release-keys"

BUILD_FINGERPRINT := LeEco/LeMax2_WW/le_x2:6.0.1/FKXOSOP5801910311S/letv10310125:user/release-keys

TARGET_VENDOR := leeco
