/**
 * 将read_line改为在碰到第一个空白字符时停止读入
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
    while ((ch=getchar()) != '\n' && !isspace(ch)){
        if (i<n)
            str[i++] = ch;   
    }
    str[i] = '\0';
    return i;
}