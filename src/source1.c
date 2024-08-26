#include <linux/printk.h>
#include "source1.h"

void source1_print() {
    printk(KERN_INFO "Print: %s:%d: %s\n", __FILE__, __LINE__, __FUNCTION__);
}
