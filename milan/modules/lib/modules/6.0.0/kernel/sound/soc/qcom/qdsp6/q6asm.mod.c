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

KSYMTAB_FUNC(q6asm_unmap_memory_regions, "_gpl", "");
KSYMTAB_FUNC(q6asm_map_memory_regions, "_gpl", "");
KSYMTAB_FUNC(q6asm_audio_client_free, "_gpl", "");
KSYMTAB_FUNC(q6asm_get_session_id, "_gpl", "");
KSYMTAB_FUNC(q6asm_audio_client_alloc, "_gpl", "");
KSYMTAB_FUNC(q6asm_open_write, "_gpl", "");
KSYMTAB_FUNC(q6asm_run, "_gpl", "");
KSYMTAB_FUNC(q6asm_run_nowait, "_gpl", "");
KSYMTAB_FUNC(q6asm_media_format_block_multi_ch_pcm, "_gpl", "");
KSYMTAB_FUNC(q6asm_stream_media_format_block_flac, "_gpl", "");
KSYMTAB_FUNC(q6asm_stream_media_format_block_wma_v9, "_gpl", "");
KSYMTAB_FUNC(q6asm_stream_media_format_block_wma_v10, "_gpl", "");
KSYMTAB_FUNC(q6asm_stream_media_format_block_alac, "_gpl", "");
KSYMTAB_FUNC(q6asm_stream_media_format_block_ape, "_gpl", "");
KSYMTAB_FUNC(q6asm_stream_remove_initial_silence, "_gpl", "");
KSYMTAB_FUNC(q6asm_stream_remove_trailing_silence, "_gpl", "");
KSYMTAB_FUNC(q6asm_enc_cfg_blk_pcm_format_support, "_gpl", "");
KSYMTAB_FUNC(q6asm_read, "_gpl", "");
KSYMTAB_FUNC(q6asm_open_read, "_gpl", "");
KSYMTAB_FUNC(q6asm_write_async, "_gpl", "");
KSYMTAB_FUNC(q6asm_cmd, "_gpl", "");
KSYMTAB_FUNC(q6asm_cmd_nowait, "_gpl", "");

MODULE_INFO(depends, "apr,q6core,snd-q6dsp-common");

MODULE_ALIAS("of:N*T*Cqcom,q6asm");
MODULE_ALIAS("of:N*T*Cqcom,q6asmC*");
