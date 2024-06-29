/*
 Created by pvnk1u on 2024/6/29.
 重写upc.c程序，使用户可以一次性输入11位数字，而不用先录入1位，再录入5位，最后再录入5位。
*/

#include <stdio.h>

int main(void) {
    printf("Enter the first 11 digits of a UPC: ");
    int d,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5,
        first_sum,second_sum,total;
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&d,&i1,&i2,&i3,&i4,&i5,&j1,&j2,&j3,&j4,&j5);
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n",9 - ((total - 1) % 10));
    return 0;
}