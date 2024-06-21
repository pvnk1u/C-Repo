/**
Created by pvnk1u on 2024/6/21.
编程要求用户输入x的值，然后显示如下多项式的值：
3x^5+2x^4-5x^3-x^2+7x-6
*/

#include <stdio.h>

int main(void){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("%d",3* x*x*x*x*x + 2 * x*x*x*x - 5 * x*x*x-x*x+7*x-6);
    return 0;
}
