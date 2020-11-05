#!/bin/bash
#
# Copyright (C) 2016 The CyanogenMod Project
# Copyright (C) 2017-2020 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

function blob_fixup() {
    case "${1}" in

    vendor/lib/libcppf.so)
        # binhaxxed to load cppf firmware from /vendor/firmware/
        sed -i -e 's|/system/etc/firmware|/vendor/firmware\x0\x0\x0\x0|g' "${2}"
        # Hex edit /firmware/image to /vendor/firmware_mnt to delete the outdated rootdir symlinks
        sed -i "s|/firmware/image|/vendor/f/image|g" "${2}"
        ;;

    # Patch blobs for VNDK
    vendor/lib64/hw/fingerprint.qcom.so | vendor/lib64/qfp.wakeup.so)
        "${PATCHELF}" --remove-needed "libandroid_runtime.so" "${2}"
        ;;

    vendor/lib64/libqfp-service.so)
        # Hex edit /firmware/image to /vendor/firmware_mnt to delete the outdated rootdir symlinks
        sed -i "s|/firmware/image|/vendor/f/image|g" "${2}"
        # Patch blobs for VNDK
        sed -i "s|libandroid_runtime.so|libfpshim.so\x00\x00\x00\x00\x00\x00\x00\x00\x00|g" "${2}"
    esac
}

# If we're being sourced by the common script that we called,
# stop right here. No need to go down the rabbit hole.
if [ "${BASH_SOURCE[0]}" != "${0}" ]; then
    return
fi

set -e

export DEVICE=x2
export DEVICE_COMMON=msm8996-common
export VENDOR=leeco

"./../../${VENDOR}/${DEVICE_COMMON}/extract-files.sh" "$@"
