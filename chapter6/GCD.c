/*
 Created by pvnk1u on 2024/7/9.

编写程序，要求用户输入两个整数，然后计算并显示出这两个整数的最大公约数（GCD）:
Enter two integers: 12 28
Greatest common divisor: 4

提示：求最大公约数的经典算法是Euclid算法，方法如下：分别让变量m和n存储两个数的值。如果n为0，那么停止操作，m中的值是GCD；
否则计算m除以n的余数，把n保存到m中，并把余数保存到n中。然后重复上述过程，每次都先判定n是否为0

*/

#include <stdio.h>

int main(void) {
    int m,n,r;
    printf("Enter two integers: ");
    scanf("%d %d",&m,&n);
    while (n != 0) {
        r = m%n;
        m = n;
        n = r;
    }
    printf("Greatest common divisor: %d",m);
}
