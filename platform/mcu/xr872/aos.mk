NAME := mcu_xr872
HOST_OPENOCD := xr872

$(NAME)_MBINS_TYPE := kernel
$(NAME)_VERSION    := 1.0.0
$(NAME)_SUMMARY    := driver & sdk for platform/mcu xr872

include $(SOURCE_ROOT)/platform/mcu/xr872/config.mk

$(NAME)_COMPONENTS += arch_armv7m rhino

$(NAME)_INCLUDES += ./drivers

GLOBAL_INCLUDES += drivers/include \
                   drivers/include/net/lwip \
                   drivers/include/driver/cmsis \
                   drivers/project \
                   drivers/project/main \
                   drivers/project/common/framework \
                   drivers/project/common/board/xradio_evb

$(NAME)_SOURCES += hal/soc/flash.c \
                   hal/soc/sd.c \
                   hal/soc/uart.c \
                   hal/wifi_port.c \
                   hal/wifi.c \
                   hal/hal.c \
                   cli_ext/cli_ext.c \

include $(SOURCE_ROOT)/platform/mcu/xr872/sdk_files.mk


$(NAME)_SOURCES += $(XR872_CHIP_FILES) \
                   $(XR872_PM_FILES) \
                   $(XR872_LWIP_FILES) \
                   $(XR872_PROJECT_FILES) \
                   $(XR872_IMAGE_FILES) \
                   $(XR872_ETHERNETIF_FILES) \
                   $(XR872_EFPG_FILES) \
                   $(XR872_SYS_FILES) \
                   $(XR872_OTA_FILES)

$(NAME)_PREBUILT_LIBRARY := \
                            drivers/lib/libamr.a \
                            drivers/lib/sc_assistant.a \
                            drivers/lib/libxz/libxz.a \
                            drivers/lib/wpa.a \
                            drivers/lib/wlan.a \
                            drivers/lib/wireless.a \
                            drivers/lib/net80211.a \
                            drivers/lib/rom.a

$(NAME)_CFLAGS += -include platform/mcu/xr872/drivers/project/common/prj_conf_opt.h
$(NAME)_CFLAGS += -include platform/mcu/xr872/drivers/project/main/prj_config.h

GLOBAL_CFLAGS += -mcpu=cortex-m4     \
                 -mthumb             \
                 -mfpu=fpv4-sp-d16  \
                 -mfloat-abi=softfp \
                 -w \
                 -fno-common \
                 -fmessage-length=0 \
                 -fno-exceptions \
                 -ffunction-sections \
                 -fdata-sections \
                 -fomit-frame-pointer \
                 -Wall \
                 -Werror \
                 -Wno-error=unused-function \
                 -MMD -MP \
                 -Os -DNDEBUG

GLOBAL_CFLAGS  += -D__CONFIG_OS_USE_YUNOS
GLOBAL_CFLAGS  += -D__CONFIG_CPU_CM4F
#GLOBAL_CFLAGS  += -D__CONFIG_ARCH_DUAL_CORE
GLOBAL_CFLAGS  += -D__CONFIG_ARCH_APP_CORE
GLOBAL_CFLAGS  += -D__CONFIG_LIBC_REDEFINE_GCC_INT32_TYPE
#GLOBAL_CFLAGS  += -D__CONFIG_LIBC_PRINTF_FLOAT
#GLOBAL_CFLAGS  += -D__CONFIG_LIBC_SCANF_FLOAT
#GLOBAL_CFLAGS  += -D__CONFIG_MALLOC_USE_STDLIB
GLOBAL_CFLAGS  += -D__CONFIG_MBUF_IMPL_MODE=0
#GLOBAL_CFLAGS  += -D__PRJ_CONFIG_WLAN_STA_AP
GLOBAL_CFLAGS  += -D__CONFIG_WLAN_STA
GLOBAL_CFLAGS  += -D__CONFIG_WLAN_MONITOR
GLOBAL_DEFINES += __CONFIG_CHIP_ARCH_VER=2

GLOBAL_CFLAGS  += -D__CONFIG_PM

GLOBAL_CFLAGS  += -D__CONFIG_CHIP_XR872
ifneq ($(no_with_rom),1)
GLOBAL_CFLAGS  += -D__CONFIG_ROM
endif
ifneq ($(no_with_xip),1)
#GLOBAL_CFLAGS  += -D__PRJ_CONFIG_XIP
GLOBAL_CFLAGS  += -D__CONFIG_XIP
endif

ifneq ($(no_with_image_compress),1)
GLOBAL_CFLAGS  += -D__CONFIG_BIN_COMPRESS
GLOBAL_CFLAGS  += -D__PRJ_CONFIG_IMG_COMPRESS
endif

GLOBAL_LDFLAGS += -mcpu=cortex-m4 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=softfp
GLOBAL_LDFLAGS += -Wl,--gc-sections --specs=nano.specs -u _printf_float
GLOBAL_LDFLAGS += -Wl,--wrap,main
GLOBAL_LDFLAGS += -lstdc++ -lsupc++ -lm -lc -lgcc -lnosys