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

KSYMTAB_FUNC(q6apm_is_adsp_ready, "_gpl", "");
KSYMTAB_FUNC(q6apm_graph_media_format_shmem, "_gpl", "");
KSYMTAB_FUNC(q6apm_map_memory_regions, "_gpl", "");
KSYMTAB_FUNC(q6apm_unmap_memory_regions, "_gpl", "");
KSYMTAB_FUNC(q6apm_remove_initial_silence, "_gpl", "");
KSYMTAB_FUNC(q6apm_remove_trailing_silence, "_gpl", "");
KSYMTAB_FUNC(q6apm_enable_compress_module, "_gpl", "");
KSYMTAB_FUNC(q6apm_set_real_module_id, "_gpl", "");
KSYMTAB_FUNC(q6apm_graph_media_format_pcm, "_gpl", "");
KSYMTAB_FUNC(q6apm_graph_get_rx_shmem_module_iid, "_gpl", "");
KSYMTAB_FUNC(q6apm_write_async, "_gpl", "");
KSYMTAB_FUNC(q6apm_read, "_gpl", "");
KSYMTAB_FUNC(q6apm_graph_open, "_gpl", "");
KSYMTAB_FUNC(q6apm_graph_close, "_gpl", "");
KSYMTAB_FUNC(q6apm_graph_prepare, "_gpl", "");
KSYMTAB_FUNC(q6apm_graph_start, "_gpl", "");
KSYMTAB_FUNC(q6apm_graph_stop, "_gpl", "");
KSYMTAB_FUNC(q6apm_graph_flush, "_gpl", "");
KSYMTAB_FUNC(audioreach_alloc_pkt, "_gpl", "");
KSYMTAB_FUNC(audioreach_alloc_apm_pkt, "_gpl", "");
KSYMTAB_FUNC(audioreach_alloc_cmd_pkt, "_gpl", "");
KSYMTAB_FUNC(audioreach_alloc_apm_cmd_pkt, "_gpl", "");
KSYMTAB_FUNC(audioreach_alloc_graph_pkt, "_gpl", "");
KSYMTAB_FUNC(audioreach_send_cmd_sync, "_gpl", "");
KSYMTAB_FUNC(audioreach_graph_send_cmd_sync, "_gpl", "");
KSYMTAB_FUNC(audioreach_send_u32_param, "_gpl", "");
KSYMTAB_FUNC(audioreach_compr_set_param, "_gpl", "");
KSYMTAB_FUNC(audioreach_gain_set_vol_ctrl, "_gpl", "");
KSYMTAB_FUNC(audioreach_set_media_format, "_gpl", "");
KSYMTAB_FUNC(audioreach_graph_free_buf, "_gpl", "");
KSYMTAB_FUNC(audioreach_map_memory_regions, "_gpl", "");
KSYMTAB_FUNC(audioreach_shared_memory_send_eos, "_gpl", "");
KSYMTAB_FUNC(audioreach_tplg_init, "_gpl", "");

MODULE_INFO(depends, "apr");

MODULE_ALIAS("of:N*T*Cqcom,q6apm");
MODULE_ALIAS("of:N*T*Cqcom,q6apmC*");
