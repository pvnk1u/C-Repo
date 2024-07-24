/*
 Created by pvnk1u on 2024/7/24.
 6.1节编写了一个程序sum.c对用户输入的整数数列求和。该程序的一个问题就是所求出的和（或其中某个输入数）
 可能会超出int型变量允许的最大值。如果程序运行在整数长度为16位的机器上，可能会发生下面的情况：
 This program sums a series of integers.
 Enter integers (0 to terminate): 10000 20000 30000 0
 The sum is: -5536

求和的结果应该为60000，但这个值不在int型变量表示的范围内，所以出现了溢出。
当有符号整数发生溢出时，结果是未定义的，在本例中得到了一个毫无意义的结果。为了改进这个程序，可以把变量改换成long型。


*/

#include <stdio.h>

int main(void) {
    long n,sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate):\n");

    // 类型从int替换成long后，scanf和printf函数中的转换说明也需要由%d改为%ld
    scanf("%ld",&n);
    while (n != 0) {
        sum += n;
        scanf("%ld",&n);
    }
    printf("The sums is:%ld\n",sum);
    return 0;
}