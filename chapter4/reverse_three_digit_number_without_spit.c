/**
 * Created by pvnk1u on 2024/6/29.
 * 重新编写reverse_three_digit_number_without_spit.c中的程序，使新程序不需要算术分割就可以显示出3位数的逆序
 */


#include <stdio.h>

int main(void) {
    int no1,no2,no3;
    printf("Enter a three-digit number:");
    scanf("%1d%1d%1d",&no1,&no2,&no3);
    printf("The reversal is:%d%d%d\n",no3,no2,no1);
}