/*
 Created by pvnk1u on 2024/7/29.

编写程序对表达式求值：
Enter an ex pression: 1+2.5*3
Value of expression: 10.5

表达式中的操作数是浮点数，运算符是+、-、*和/。表达式从左向右求值（所有运算符的优先级都一样）
*/

#include <stdio.h>

int main(void) {
    printf("Enter an expression: ");
    double total = 0.0;
    scanf("%lf",&total);
    char calcSign;
    double nextValue;
    while ((calcSign = getchar()) != '\n') {
        scanf("%lf",&nextValue);
        if (calcSign == '+') {
            total += nextValue;
        }else if (calcSign =='-') {
            total -= nextValue;
        }else if(calcSign == '*') {
            total *= nextValue;
        }else {
            total /= nextValue;
        }
    }
    printf("Value of expression: %f\n",total);
    return 0;
}
