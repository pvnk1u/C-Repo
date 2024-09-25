/*
 Created by pvnk1u on 2024/9/25.

 使用指针的算术运算取代了reverse.c中的对数组的去下标操作
*/

#include <stdio.h>

#define N 10

int main(void) {
    int a[10],*p;

    printf("Enter %d numbers: ",N);
    for (p = a;p < a+N;p++)
        scanf("%d",p);

    printf("In reverse order: ");
    for (p = a+N-1;p>=a;p--)
        printf(" %d",*p);
    printf("\n");

    return 0;
}