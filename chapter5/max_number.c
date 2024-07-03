/*
 Created by pvnk1u on 2024/7/3.

编写一个程序，从用户输入的4个整数中找出最大值和最小值：
Enter four integers: 21 43 10 35
Largest: 43
Smallest: 10

*/


#include <stdio.h>

int main(void) {
    int no1,no2,no3,no4,largest,smallest;
    printf("Enter four integers: ");
    scanf("%d %d %d %d",&no1,&no2,&no3,&no4);
    if (no1 >= no2) {
        largest = no1;
        smallest = no2;
    } else {
        largest = no2;
        smallest = no1;
    }
    if (no3 > largest) {
        largest = no3;
    }else if (no3 < smallest) {
        smallest = no3;
    }
    if (no4 > largest) {
        largest = no4;
    }else if (no4 < smallest) {
        smallest = no4;
    }
    printf("Largest: %d\n",largest);
    printf("Smallest: %d",smallest);
}