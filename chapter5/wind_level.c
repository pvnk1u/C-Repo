/*
 Created by pvnk1u on 2024/7/2.

 下面是用于测量风力的蒲福风力等级的简化版本

| 速率（海里/小时） | 描述              |
| ----------------- | ----------------- |
| 小于1             | Calm（无风）      |
| 1~3               | Light air（轻风） |
| 4~27              | Breeze（微风）    |
| 28~47             | Gale（大风）      |
| 48~63             | Storm（暴风）     |
| 大于63            | Hrricane（飓风）  |

编写一个程序，要求用户输入风速（海里/小时），然后显示相应的描述
*/

#include <stdio.h>

int main(void) {
    int windSpeed;
    printf("Enter the wind speed: ");
    scanf("%d",&windSpeed);
    if (windSpeed < 1) {
        printf("Calm");
    }else if(windSpeed >=1 && windSpeed<=3) {
        printf("Light air");
    }else if(windSpeed >=4 && windSpeed <= 27) {
        printf("Breeze");
    }else if(windSpeed >= 28 && windSpeed <= 47) {
        printf("Gale");
    }else if(windSpeed >= 48 && windSpeed <= 63) {
        printf("Storm");
    }else if (windSpeed > 63) {
        printf("Hurricane");
    }
    return 0;
}