/*
 Created by pvnk1u on 2024/7/10.

编写程序显示单月的日历。用户指定这个月的天数和该月起始日是星期几：
Enter number of days in month: 31
Enter starting day of the week(1=Sun,7=Sat): 3

          1  2  3  4  5
    6  7  8  9 10 11 12
   13 14 15 16 17 18 19
   20 21 22 23 24 25 26
   27 28 29 30 31

提示：这个程序不像看上去那么难。最重要的一个部分是一个使用变量i从1计数到n的for语句（这里n是此月的天数），
for语句中需要显示i的每个值。在循环中，用if语句判定i是否是一个星期的最后一天，如果是，就显示一个换行符

*/
#include <stdio.h>

int main(void) {
    int days,count;
    printf("Enter number of days in month: ");
    scanf("%d",&days);
    printf("Enter starting day of the week(1=Sun,7=Sat): ");
    scanf("%d",&count);
    printf("\n Mo Tu We Th Fr Sa Su\n");

    for (int i = 1, day = 1; i <= days + count - 1; i++) {
        if (i < count)
            printf("   ");
        else
            printf("%3d", day++);
        if (i % 7 == 0)
            printf("\n");
    }
    return 0;
}
