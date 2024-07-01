/*
 Created by pvnk1u on 2024/7/1.
*/

#include <stdio.h>

int main(void) {
    printf("Enter grade: ");
    int grade;
    scanf("%d",&grade);
    if(grade == 4)
        printf("Excellent");
    else if(grade == 3)
        printf("Good");
    else if(grade == 2)
        printf("Average");
    else if(grade == 1)
        printf("Poor");
    else if(grade == 1)
        printf("Failing");
    else
        printf("Illegal grade");

    // C语言提供了switch语句作为这类级联式if语句的替换。下面的switch语句等价于前面的级联式if语句：
    switch(grade){
        case 4: printf("Excellent");
                break;
        case 3: printf("Good");
                break;
        case 2: printf("Average");
                break;
        case 1: printf("Poor");
                break;
        case 0: printf("Failing");
                break;
        default: printf("Illegal grade");
                break;
    }
}