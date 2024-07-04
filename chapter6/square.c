/*
 Created by pvnk1u on 2024/7/4.

现在编写一个程序来显示平方表。首先程序提示用户输入一个数n，然后显示n行的输出，每行包含一个1~n的数及其平方值。

This program prints a table of squares.
Enter number of entries in the table: 5
         1         1
         2         4
         3         9
         4        16
         5        25

*/

#include <stdio.h>

int main(void) {
    int i,n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in the table:");
    scanf("%d",&n);

    i = 1;
    while (i <= n) {
        printf("%10d%10d\n",i,i*i);
        i++;
    }

    return 0;
}