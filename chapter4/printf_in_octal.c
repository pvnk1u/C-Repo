/*
 Created by pvnk1u on 2024/6/29.

 编写一个程序，读入用户输入的整数并按八进制（基数为8）显示出来：
 Enter a number between 0 and 32767: 1953
 In octal, your number is: 03641

 输出应为5位数，即便不需要这么多数位也要如此。
 提示：要把一个数转换成八进制，首先将其除以8，所得的余数是八进制数的最后一位（本例中为1）；然后把原始的数除以8，对除法结果重复上述过程，得到倒数第二位
*/


#include <stdio.h>

int main(void) {

 int n;

 printf("Enter a number between 0 and 32767: ");
 scanf("%d", &n);

 printf("In octal, your number is %d%d%d%d%d\n",
        n / 4096 % 8,  n / 512 % 8, n / 64 % 8, n / 8 % 8, n % 8);

 return 0;
}
