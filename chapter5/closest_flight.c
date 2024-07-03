/*
 Created by pvnk1u on 2024/7/3.

 下面的表格给出了一个城市到另一个城市的每日航班信息

| 起飞时间 | 抵达时间 |
| -------- | -------- |
| 8:00 am  | 10:16 am |
| 9:43 am  | 11:52 am |
| 11:19 am | 1:31 pm  |
| 12.47 pm | 3:00 pm  |
| 2:00 pm  | 4:08 pm  |
| 3:45 pm  | 5:55 pm  |
| 7:00 pm  | 9:20 pm  |
| 9:45 pm  | 11:58 pm |

编写一个程序，要求用户输入一个时间（用24小时制的时分表示）。程序选择起飞时间和用户输入最接近的航班，显示出相应的起飞时间和抵达时间。

Enter a 24-hour time: 13:15
Closest departure time is 12:47 pm,arriving at 3:00pm
*/

#include <stdio.h>

int main(void) {
    int hour,minute,minuteOfDay;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hour,&minute);
    minuteOfDay = hour * 60 + minute;
    int d1 = 8*60,
        d2 = 9*60+43,
        d3=11*60+19,
        d4=12*60+47,
        d5=14*60,
        d6=15*60+45,
        d7=19*60,
        d8=21*60+45;

    printf("Closest departure time is ");
    if (minuteOfDay <= d1 + (d2 - d1) / 2)
        printf("8:00 a.m., arriving at 10:16 a.m.\n");
    else if (minuteOfDay < d2 + (d3 - d2) / 2)
        printf("9:43 a.m., arriving at 11:52 a.m.\n");
    else if (minuteOfDay < d3 + (d4 - d3) / 2)
        printf("11:19 a.m., arriving at 1:31 p.m.\n");
    else if (minuteOfDay < d4 + (d5 - d4) / 2)
        printf("12:47 p.m., arriving at 3:00 p.m.\n");
    else if (minuteOfDay < d5 + (d6 - d5) / 2)
        printf("2:00 p.m., arriving at 4:08 p.m.\n");
    else if (minuteOfDay < d6 + (d7 - d6) / 2)
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
    else if (minuteOfDay < d7 + (d8 - d7) / 2)
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
    else
        printf("9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}
