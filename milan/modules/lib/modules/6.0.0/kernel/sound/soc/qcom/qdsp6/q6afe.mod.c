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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(q6afe_get_port_id, "_gpl", "");
KSYMTAB_FUNC(q6afe_set_lpass_clock, "_gpl", "");
KSYMTAB_FUNC(q6afe_port_set_sysclk, "_gpl", "");
KSYMTAB_FUNC(q6afe_port_stop, "_gpl", "");
KSYMTAB_FUNC(q6afe_slim_port_prepare, "_gpl", "");
KSYMTAB_FUNC(q6afe_tdm_port_prepare, "_gpl", "");
KSYMTAB_FUNC(q6afe_hdmi_port_prepare, "_gpl", "");
KSYMTAB_FUNC(q6afe_i2s_port_prepare, "_gpl", "");
KSYMTAB_FUNC(q6afe_cdc_dma_port_prepare, "_gpl", "");
KSYMTAB_FUNC(q6afe_port_start, "_gpl", "");
KSYMTAB_FUNC(q6afe_port_get_from_id, "_gpl", "");
KSYMTAB_FUNC(q6afe_port_put, "_gpl", "");
KSYMTAB_FUNC(q6afe_unvote_lpass_core_hw, "", "");
KSYMTAB_FUNC(q6afe_vote_lpass_core_hw, "", "");

MODULE_INFO(depends, "apr,q6core");

MODULE_ALIAS("of:N*T*Cqcom,q6afe");
MODULE_ALIAS("of:N*T*Cqcom,q6afeC*");
