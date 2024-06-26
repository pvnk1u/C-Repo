//
// Created by pvnk1u on 2024/6/26.
// 编写一个程序，提示用户以(xxx)xxx-xxxx的格式输入电话号码，并以xxx.xxx.xxxx的格式显示该号码：
// Enter phone number [(xxx)- xxx-xxxx]: (404) 817-6900
//
// You entered 404.817.6900
//

#include <stdio.h>

int main(void) {
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    int no1,no2,no3;
    scanf("(%d) %d-%d",&no1,&no2,&no3);
    printf("You entered %d.%d.%d",no1,no2,no3);
}