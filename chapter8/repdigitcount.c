/*
 Created by pvnk1u on 2024/8/11.
 修改repdigit.c，使其打印出一份列表，显示出每个数字在数中出现的次数：
 Enter a number: 41271092
 Digit:        0  1  2  3  4  5  6  7  8  9
 Occurrences:  1  2  2  0  1  0  0  1  0  1
*/

#include <stdbool.h>
#include <stdio.h>

#define N 10

int main(void) {
    int digit_seen[N] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld",&n);

    while (n > 0) {
        digit = n %10;
        digit_seen[digit] += 1;
        n /=10;
    }

    printf("Digit:        ");
    for (int i =0;i<N;i++) {
        printf("%d ",i);
    }
    printf("\nOccurrences:  ");
    for (int i =0;i<N;i++) {
        printf("%d ",digit_seen[i]);
    }
    return 0;
}
