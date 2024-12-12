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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const char ____versions[]
__used __section("__versions") =
	"\x1c\x00\x00\x00\x53\x54\x9a\xb1"
	"__per_cpu_offset\0\0\0\0"
	"\x28\x00\x00\x00\xb3\x1c\xa2\x87"
	"__ubsan_handle_out_of_bounds\0\0\0\0"
	"\x10\x00\x00\x00\x2b\x83\x12\xc6"
	"pv_ops\0\0"
	"\x14\x00\x00\x00\xe6\x10\xec\xd4"
	"BUG_func\0\0\0\0"
	"\x14\x00\x00\x00\x2f\x7a\x25\xa6"
	"complete\0\0\0\0"
	"\x20\x00\x00\x00\xb5\x41\x87\x60"
	"__init_swait_queue_head\0"
	"\x1c\x00\x00\x00\x00\x40\x97\x25"
	"wait_for_completion\0"
	"\x18\x00\x00\x00\xe1\xbe\x10\x6b"
	"_copy_to_user\0\0\0"
	"\x28\x00\x00\x00\xff\xca\xfe\xe1"
	"smp_call_function_single_async\0\0"
	"\x1c\x00\x00\x00\xcb\xf6\xfd\xf0"
	"__stack_chk_fail\0\0\0\0"
	"\x1c\x00\x00\x00\x61\x94\xb6\x1c"
	"__register_chrdev\0\0\0"
	"\x18\x00\x00\x00\xbc\xa2\x3b\x2f"
	"class_register\0\0"
	"\x1c\x00\x00\x00\xc0\xfb\xc3\x6b"
	"__unregister_chrdev\0"
	"\x1c\x00\x00\x00\xd3\xff\xad\x2a"
	"__cpuhp_setup_state\0"
	"\x1c\x00\x00\x00\x17\xdd\xfb\x64"
	"class_unregister\0\0\0\0"
	"\x10\x00\x00\x00\x7e\x3a\x2c\x12"
	"_printk\0"
	"\x20\x00\x00\x00\xbe\x9e\x5e\x87"
	"__cpuhp_remove_state\0\0\0\0"
	"\x1c\x00\x00\x00\xe4\xb7\xad\x56"
	"no_seek_end_llseek\0\0"
	"\x14\x00\x00\x00\xbb\x6d\xfb\xbd"
	"__fentry__\0\0"
	"\x18\x00\x00\x00\x10\x5e\x65\x38"
	"device_destroy\0\0"
	"\x1c\x00\x00\x00\xca\x39\x82\x5b"
	"__x86_return_thunk\0\0"
	"\x18\x00\x00\x00\xc3\x9e\x64\x92"
	"device_create\0\0\0"
	"\x14\x00\x00\x00\x37\x4d\x38\xfb"
	"kasprintf\0\0\0"
	"\x14\x00\x00\x00\xd5\xe3\x7d\x01"
	"nr_cpu_ids\0\0"
	"\x1c\x00\x00\x00\x71\x22\x5a\x5a"
	"__cpu_online_mask\0\0\0"
	"\x14\x00\x00\x00\x79\x52\x08\xa8"
	"cpu_info\0\0\0\0"
	"\x18\x00\x00\x00\xd7\xd3\x75\x6d"
	"module_layout\0\0\0"
	"\x00\x00\x00\x00\x00\x00\x00\x00";

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "03BB8D5DF627CCE0E4DAAA5");
