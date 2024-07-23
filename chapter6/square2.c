/*
 Created by pvnk1u on 2024/7/23.

通过将while循环转化为for循环的方式改进square.c
*/

#include <stdio.h>

int main(void) {
    int i,n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d",&n);

    for (i = 1;i<=n;i++)
        printf("%10d%10d\n",i,i*i);
    return 0;
}