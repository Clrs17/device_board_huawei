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

KSYMTAB_FUNC(q6voice_common_probe, "_gpl", "");
KSYMTAB_FUNC(q6voice_common_remove, "_gpl", "");
KSYMTAB_FUNC(q6voice_session_release, "_gpl", "");
KSYMTAB_FUNC(q6voice_session_create, "_gpl", "");
KSYMTAB_FUNC(q6voice_common_callback, "_gpl", "");
KSYMTAB_FUNC(q6voice_common_send, "_gpl", "");

MODULE_INFO(depends, "apr");

