/*
 Created by pvnk1u on 2024/7/31.

要求用户录入一串数，然后按反向顺序输出这些数：
Enter 10 numbers: 34 82 49 102 7 94 23 11 50 31
In reverse order: 31 50 11 23 94 7 102 49 82 34

*/

#include <stdio.h>

#define N 10

int main(void) {
    int a[N],i;

    printf("Enter %d numbers: ",N);
    for (i = 0;i< N;i++) {
        scanf("%d",&a[i]);
    }

    printf("In reverse order: ");
    for (i = N-1;i>=0;i--) {
        printf(" %d",a[i]);
    }
    printf("\n");
    return 0;
}