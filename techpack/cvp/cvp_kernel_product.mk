ifneq ($(call is-board-platform-in-list,parrot qcs605),true)
PRODUCT_PACKAGES += msm-cvp.ko
endif
