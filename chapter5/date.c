/*
 Created by pvnk1u on 2024/7/1.

合同和其他法律文档经常使用下列日期格式：
Dated this__day of__,20__.

下面编写程序，用这种格式来显示日期。用户以月/日/年的格式录入日期，然后计算机显示出“法定”格式的日期：

Enter date (mm/dd/yy): 7/19/14
Dated this 19th day of July,2014

*/


#include <stdio.h>

int main(void) {
    int month,day,year;

    printf("Enter date (mm/dd/yy): ");
    scanf("%d /%d /%d",&month,&day,&year);

    // 为日添加“th”（或者“st”、“nd”、“rd”）
    printf("Dated this %d",day);
    switch (day) {
        case 1: case 21: case 31:
            printf("st");break;
        case 2: case 22:
            printf("nd");break;
        case 3: case 23:
            printf("rd");break;
        default:printf("th");break;
    }
    printf(" day of ");

    // 用单词而不是数字来显示月份
    switch (month) {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July");break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
    }
    printf(", 20%.2d.\n",year);
}