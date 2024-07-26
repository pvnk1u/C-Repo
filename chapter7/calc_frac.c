/*
 Created by pvnk1u on 2024/7/26.

修改add_frac_new.c，使用户可以对两个分数进行加、减、乘、除运算（在两个分数之间输入+、-、*或/符号）
*/

#include <stdio.h>

int main(void) {
    int num1,denom1,num2,denom2,result_num,result_denom;
    char calcSign;

    printf("Enter two fractions separated with a calc sign: ");
    scanf("%d/%d%c%d/%d",&num1,&denom1,&calcSign,&num2,&denom2);

    switch (calcSign) {
        case '+':
            result_num = num1 * denom2 + num2 *denom1;
            result_denom = denom1 * denom2;
            break;
        case '-':
            result_num = num1 * denom2 - num2 *denom1;
            result_denom = denom1 * denom2;
            break;
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;
        case '/':
            result_num = num1 * denom2;
            result_denom = denom1 * num2;
            break;
        default:
            break;
    }

    printf("The result is %d/%d\n",result_num,result_denom);
    return 0;
}