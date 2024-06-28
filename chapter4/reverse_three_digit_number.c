/**
*Created by pvnk1u on 2024/6/28.

修改reverse_two_digit_number.c，使其可以处理三位数
 *
 *
 */

#include <stdio.h>

int main(void) {
   int number;
    printf("Enter a three-digit number:");
    scanf("%d",&number);
    int firstNo = number%10;
    int secondNo = number/10%10;
    int thirdNo = number/100;
    printf("The reversal is:%d\n",firstNo*100 + secondNo*10+thirdNo);
}