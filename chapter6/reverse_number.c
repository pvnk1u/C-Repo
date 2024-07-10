/*
 Created by pvnk1u on 2024/7/10.

reverse_two_digit_number.c要求编写程序显示出两位数的逆序。设计一个更具一般性的程序，可以处理一位、两位、三位或者更多位的数。

提示：使用do循环将输入的数重复除以10，直到值达到0为止
*/


#include <stdio.h>

int main(void) {
    int no,r;
    printf("Enter an integer: ");
    scanf("%d",&no);
    printf("The reverse number is: ");
    do {
        r = no % 10;
        no = no/10;
        printf("%d",r);
    }while (no != 0);
    return 0;
}