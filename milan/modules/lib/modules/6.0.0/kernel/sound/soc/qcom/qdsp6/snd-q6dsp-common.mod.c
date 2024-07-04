#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(q6dsp_map_channels, "_gpl", "");
KSYMTAB_FUNC(q6dsp_get_channel_allocation, "_gpl", "");
KSYMTAB_FUNC(q6dsp_audio_ports_of_xlate_dai_name, "_gpl", "");
KSYMTAB_FUNC(q6dsp_audio_ports_set_config, "_gpl", "");
KSYMTAB_FUNC(q6dsp_clock_dev_probe, "_gpl", "");

MODULE_INFO(depends, "");

