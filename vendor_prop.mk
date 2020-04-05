# Product
PRODUCT_PROPERTY_OVERRIDES += \
    ro.config.product=x2 \
    ro.config.le_hardware_version=HW_1.0.0 \
    ro.display.series="Le Max2"

# Apical AD
PRODUCT_PROPERTY_OVERRIDES += \
    ro.qcom.ad.calib.data=/vendor/etc/ad_calib_x2.cfg

# Display
PRODUCT_PROPERTY_OVERRIDES += \
    ro.sf.lcd_density=560

# Fingerprint
PRODUCT_PROPERTY_OVERRIDES += \
    persist.qfp=true \
    persist.qfp.fd_enabled=1 \
    persist.qfp.ssc_enable_island=1 \
    persist.qfp.ssc_fgoff_dil_s1=10 \
    persist.qfp.ssc_fgoff_dil_home=1 \
    persist.qfp.finger_evt_enabled=1 \
    persist.qfp.touch_enabled=1 \
    persist.qfp.ssc_thresh_s1=0.570 \
    persist.qfp.ssc_thresh_s1_off=0.0 \
    persist.qfp.ssc_thresh_s1_rub=1500 \
    persist.qfp.ssc_thresh_s2=0.430 \
    persist.qfp.ssc_thresh_s2_off=4.0 \
    persist.qfp.ssc_thresh_s2_touch=0.430 \
    persist.qfp.ssc_thresh_s2_lift=0.410 \
    persist.qfp.filter_movefinger=1000 \
    persist.qfp.filter_holdfinger=50000 \
    persist.qfp.filter_insuffcov=6000 \
    persist.qfp.filter_liftfinger=0 \
    persist.qfp.ssc_basis_s1=/mnt/vendor/persist/qc_senseid/bg_estimation/bg_small1_basis.dat \
    persist.qfp.ssc_basis_s1_off=/mnt/vendor/persist/qc_senseid/bg_estimation/bg_small1_off_basis.dat \
    persist.qfp.ssc_basis_s2=/mnt/vendor/persist/qc_senseid/bg_estimation/bg_small2_basis.dat \
    persist.qfp.ssc_basis_s2_off=/mnt/vendor/persist/qc_senseid/bg_estimation/bg_small2_off_basis.dat \
    persist.qfp.eeprom=/sys/bus/i2c/devices/8-0051/eeprom

# Radio
PRODUCT_PROPERTY_OVERRIDES += \
    persist.radio.multisim.config=dsds
