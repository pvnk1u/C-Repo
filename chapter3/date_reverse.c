/**
 * Created by pvnk1u on 2024/6/24.
 * 编写一个程序，以月/日/年的格式接受用户输入的日期信息，并以年月日的格式将其显示出来
 */

#include <stdio.h>

int main(void) {
    int year, month, day;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d /%d /%d", &month, &day, &year);

    printf("You entered the date %.4d%.2d%.2d\n", year, month, day);
    return 0;
}