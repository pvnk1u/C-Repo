/*
 Created by pvnk1u on 2024/7/28.

编写程序要求用户输入12小时工作制的时间，然后用24小时制显示该时间：
Enter a 12-hour time: 9:11 PM
Equivalent 24-hour time: 21:11

*/


#include <ctype.h>
#include <stdio.h>

int main(void) {
    int hour,minute;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d",&hour,&minute);
    char c;
    while ((c=getchar()) != '\n') {
        if (c == ' ') {
            continue;
        }
        if (toupper(c) == 'A') {
            break;
        }else {
            hour += 12;
            break;
        }
    }
    printf("%d:%d",hour,minute);
    return 0;
}