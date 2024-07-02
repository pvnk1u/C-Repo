/*
 Created by pvnk1u on 2024/7/2.

编写一个程序，要求用户输入24小时制的时间，然后显示12小时制的格式：

Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM

注意不要把12:00显示成0:00

*/

#include <stdio.h>

int main(void) {
    printf("Enter a 24-hour time: ");
    int hour=0,minute = 0;
    scanf("%d:%d",&hour,&minute);

    if (hour < 11)
        printf("Equivalent 12-hour time: %d:%.2d AM\n",
                hour == 0 ? 12 : hour, minute);
    else
        printf("Equivalent 12-hour time: %d:%.2d PM\n",
               hour == 12 ? 12 : hour - 12, minute);
    return 0;
}