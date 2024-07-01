/*
 Created by pvnk1u on 2024/7/1.

 编写一个程序，确定一个数的位数：
 Enter a number: 374
 The number 374 has 3 digits

假设输入的数最多不超过4位。提示：利用if语句进行数的判定。例如，如果数在0到9之间，那么位数为1；如果数在10到99之间，那么位数为2

*/

#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    int digits = 0;
    if (number<=9) {
        digits = 1;
    }else if(number >= 10 && number <= 99) {
        digits = 2;
    }else if (number >= 100 && number <= 999) {
        digits = 3;
    }
    printf(" The number %d has %d digits",number,digits);
}