/**
 * 将read_line改为在碰到一个换行符时停止读入，然后把换行符存储到字符串中
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
    for (;;){
        if (i<n)
            str[i++] = ch=getchar();
        if (ch == '\n'){
            break;
        }
        
    }
    return i;
}