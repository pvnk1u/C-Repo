/**
 * 修改reverse_array.c程序，用指针代替整数来跟踪数组中的当前位置。
 */
#include <stdio.h>

#define LENGTH 100

int main(int argc, char const *argv[]){
    char ARR[LENGTH];
    char *p = ARR;
    char c;
    printf("Enter a message:");
    while ((c = getchar()) != '\n' && p < ARR + LENGTH - 1) {
        *p++ = c;
    }
    *p = '\0'; // 添加字符串结束符
    printf("Reversal is:");
    while(p-->=ARR){
        printf("%c",*p);
    }
    return 0;
}