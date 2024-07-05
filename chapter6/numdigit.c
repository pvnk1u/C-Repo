/*
 Created by pvnk1u on 2024/7/5.

虽然C程序中while语句的出现次数远多于do语句，但是后者对于至少需要执行一次的循环来说是非常方便的。为了说明这一点，现在编写一个程序计算用户输入的整数的位数：
Enter a nonnegative integer: 60
The number has 2 digit(s).

方法是把输入的整数反复除以10，直到结果变为0时停止；除法的次数就是所求的位数。因为不知道到底需要多少次除法运算才能达到0，所以很明显程序需要某种循环。
但是应该用while语句还是do语句呢？do语句显然更合适，因为每个整数（包括0）都至少有一位数字。
*/

#include <stdio.h>

int main(void) {
    int num;
    printf("Enter a nonnegative integer: ");
    scanf("%d",&num);
    int digit = 0;
    do {
        num /= 10;
        digit ++;
    }while (num!=0);
    printf("The number has %d digit(s).",digit);
}