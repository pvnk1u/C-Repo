/*
 Created by pvnk1u on 2024/8/8.

 修改repdigit.c 使其可以显示出哪些数字有重复（如果有的话）

 Enter a number: 939577
 Repeated digit(s): 7 9
*/

#include <stdbool.h>
#include <stdio.h>

#define N 10

int main(void) {
    int digit_seen[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld",&n);

    while (n > 0) {
        digit = n %10;
        digit_seen[digit] += 1;
        n /=10;
    }

    printf(" Enter a number:");
    for (int i =0;i<N;i++) {
        if (digit_seen[i] >1 ) {
            printf("%d ",i);
        }
    }
    return 0;
}

