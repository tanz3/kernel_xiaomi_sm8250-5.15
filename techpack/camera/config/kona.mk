# Settings for compiling kona camera architecture

# Localized KCONFIG settings
CONFIG_SPECTRA_FD := y
CONFIG_SPECTRA_ISP := y
CONFIG_SPECTRA_ICP := y
CONFIG_SPECTRA_JPEG := y
CONFIG_SPECTRA_SENSOR := y
CONFIG_SPECTRA_CAMERA_IFE :=y
CONFIG_QCOM_CX_IPEAK := y

# Flags to pass into C preprocessor
ccflags-y += -DCONFIG_SPECTRA_FD=1
ccflags-y += -DCONFIG_SPECTRA_ISP=1
ccflags-y += -DCONFIG_SPECTRA_ICP=1
ccflags-y += -DCONFIG_SPECTRA_JPEG=1
ccflags-y += -DCONFIG_SPECTRA_SENSOR=1
ccflags-y += -DCONFIG_SPECTRA_CAMERA_IFE=1
