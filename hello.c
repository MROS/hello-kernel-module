#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init hello_init(void)
{
    printk(KERN_INFO "你好！核心模組！\n");
    return 0;
}

static void __exit hello_cleanup(void)
{
  printk(KERN_INFO "再見！核心模組！\n");
}

module_init(hello_init);
module_exit(hello_cleanup);

