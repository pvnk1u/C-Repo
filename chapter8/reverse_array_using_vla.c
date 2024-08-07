/*
 Created by pvnk1u on 2024/7/31.

要求用户录入一串数，然后按反向顺序输出这些数：
Enter 10 numbers: 34 82 49 102 7 94 23 11 50 31
In reverse order: 31 50 11 23 94 7 102 49 82 34

使用可变数组的新版本

*/

#include <stdio.h>


int main(void) {
    int i,n;

    printf("How many numbers do you want to reverse? ");
    scanf("%d",&n);

    int a[n];  /* C99 ONLY */

    printf("Enter %d numbers:", n);
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("In reverse order:");
    for (i = n-1;i>=0;i--)
        printf(" %d",a[i]);
    printf("\n");
    return 0;
}