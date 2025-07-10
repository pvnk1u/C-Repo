/**
 * 将read_line改为在开始存储输入字符前跳过空白字符
 */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define MSG_LEN 50

int read_line(char str[],int n);

int main(void) {
    char str[MSG_LEN+1];
    read_line(str,MSG_LEN);
    printf("%s\n",str);
    return 0;
}

int read_line(char str[],int n) {
    int ch,i=0;
    bool atStartFlag = true;
    while ((ch=getchar()) != '\n'){
        if (isspace(ch) && atStartFlag){
            continue;
        }
        if (i<n)
            atStartFlag = false;
            str[i++] = ch;   
    }
    str[i] = '\0';
    return i;
}