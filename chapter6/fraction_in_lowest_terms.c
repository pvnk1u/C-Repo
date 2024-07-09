/*
 Created by pvnk1u on 2024/7/9.

编写程序，要求用户输入一个分数，然后将其约分为最简分式：
Enter a fraction: 6/12
In lowest terms: 1/2

提示：为了把分数约分为最简分式，首先计算分子和分母的最大公约数，然后分子和分母都除以最大公约数

*/

#include <stdio.h>

int main(void) {
    int m,n;
    printf("Enter a fraction: ");
    scanf("%d/%d",&m,&n);
    int m1 = m,n1 = n;
    int r;
    while (n != 0) {
        r = m%n;
        m = n;
        n = r;
    }
    printf("In lowest terms: %d/%d",m1 / m,n1/m);
    return 0;
}
