/**
 *  编写名为 sum.c的程序，用来对命令行参数（假设都是整数）求和。如果输入
 *  sum 8 24 62
 *  运行程序，产生的输出应为
 *  Total: 94
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sum = 0;
    for (size_t i = 0; i < argc; i++){
        sum += atoi(argv[i]);
    }
    printf("%d\n",sum);
    return 0;
}