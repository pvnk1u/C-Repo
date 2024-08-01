/*
 Created by pvnk1u on 2024/8/1.

接下来这个程序用来检查数中是否有出现多于一次的数字。用户输入数后，程序显示信息Repeated digit或No Repeated digit：


Enter a number: 28212
Repeated digit

数28212有一个重复的数字（即2），而9357这样的数则没有。



程序采用布尔值的数组跟踪数中出现的数字。名为digit_seen的数组元素的下标偏移量从0到9，对应于10个可能的数字。最初的时候，每个数组元素的值都为假。
（digit_seen)的初始化式为{false}，这实际上只初始化了数组的第一个元素。但是，编译器会自动把其他元素初始化为0，而0跟false是相等的。



当给定数n时，程序一次一个地检查n的数字，并且把每次的数字存储在变量digit中，然后用这个数字作为数组digit_seen的下标索引。如果digit_seen[digit]为真，
那么表示digit至少在n中出现了两次。另一方面，如果digit_seen[digit]为假，那么表示digit之前未出现过，因此程序会把digit_seen[digit]设置为真并且继续执行。
*/

#include <stdbool.h> // C99 only
#include <stdio.h>

int main(void) {
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld",&n);

    while (n > 0) {
        digit = n %10;
        if (digit_seen[digit])
            break;
        digit_seen[digit] = true;
        n /=10;
    }

    if (n > 0) {
        printf("Repeated digit\n");
    }else {
        printf("No repeated digit\n");
    }
    return 0;
}