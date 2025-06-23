/**
 *  编写程序读一条消息，然后逆序打印出这条消息：
    Enter a message: Don't get mad, get even.
    Reversal is: .neve teg ,dam teg t'noD
 */

#include <stdio.h>

#define LENGTH 100

int main(int argc, char const *argv[]){
    char ARR[LENGTH];
    int i = 0;
    char c;
    printf("Enter a message:");
    while ((c = getchar()) != '\n' && i < LENGTH - 1) {
        ARR[i++] = c;
    }
    ARR[i] = '\0'; // 添加字符串结束符
    printf("Reversal is:");
    while(i-->=0){
        printf("%c",ARR[i]);
    }
    return 0;
}