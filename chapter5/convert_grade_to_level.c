/*
 Created by pvnk1u on 2024/7/3.

利用switch语句编写一个程序，把用数字表示的成绩转化成字母表示的等级

Enter numerical grade: 84
Letter grade: B

使用下面的等级评定规则：A为90~100，B为80~89，C为70~79，D为60~69，F为0~59，
如果成绩高于100或低于0显示出错信息。

*/

#include <stdio.h>

int main(void) {
    int grade;
    printf("Enter numerical grade: ");
    scanf("%d",&grade);

    if (grade > 100 || grade < 0) {
        grade = -11;
    }

    switch (grade/10) {
        case 0: case 1: case 2: case 3: case 4: case 5:
            printf("Letter grade: F\n");
            break;
        case 6:
            printf("Letter grade: D\n");
            break;
        case 7:
            printf("Letter grade: C\n");
            break;
        case 8:
            printf("Letter grade: B\n");
            break;
        case 9: case 10:
            printf("Letter grade: A\n");
            break;
        default:
            printf("Error: numerical grade out of range 0-100\n");
            break;
    }
    return 0;

}
