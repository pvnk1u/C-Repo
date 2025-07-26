/**
 * 编写名为reverse.c的程序，用来逆序输出命令行参数。如果输入
 * void and null
 * 运行程序，产生的输出应为
 * null and void 
 */


#include <stdio.h>

int main(int argc, char *argv[]) {
    // 从最后一个参数开始向前遍历
    for (int i = argc - 1; i > 0; i--) {
        printf("%s", argv[i]);
        // 如果不是第一个参数，打印空格分隔
        if (i > 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}