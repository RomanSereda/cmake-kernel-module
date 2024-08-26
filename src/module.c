#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#include "source1.h"

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Test module author name");
MODULE_DESCRIPTION("Test module");
MODULE_VERSION("0.1");

static int __init module_start(void) {
    printk(KERN_INFO "Loading test module...\n");

    source1_print();
    return 0;
}

static void __exit module_end(void) {
    printk(KERN_INFO "Unloading test module...\n");
}

module_init(module_start);
module_exit(module_end);