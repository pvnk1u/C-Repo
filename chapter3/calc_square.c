/**
    Created by pvnk1u on 2024/6/26.
    编写一个程序，要求用户（按任意次序）输入从1到16的所有整数，然后用4*4矩阵的形式将它们显示出来，再计算出每行、每列和每条对角线上的和：
    Enter the number from 1 to 16 in any order:
    16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
    16 3 2 13
    5 10 11 8
    9 6 7 12
    4 15 14 1
    Row sums: 34 34 34 34
    Column sums: 34 34 34 34
    Diagonal sums: 34 34
*/


#include <stdio.h>

int main(void) {
    printf("Enter the number from 1 to 16 in any order: \n");
    int no1,no2,no3,no4,no5,no6,no7,no8,no9,no10,no11,no12,no13,no14,no15,no16;
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
        &no1,
        &no2,
        &no3,
        &no4,
        &no5,
        &no6,
        &no7,
        &no8,
        &no9,
        &no10,
        &no11,
        &no12,
        &no13,
        &no14,
        &no15,
        &no16
        );

    printf("%d %d %d %d\n",no1,no2,no3,no4);
    printf("%d %d %d %d\n",no5,no6,no7,no8);
    printf("%d %d %d %d\n",no9,no10,no11,no12);
    printf("%d %d %d %d\n",no13,no14,no15,no16);


    int firstRowSums = no1 + no2 + no3 + no4;
    int secondRowSums = no5 + no6 + no7 + no8;
    int thirdRowSums = no9 + no10 + no11 + no12;
    int forthRowSums = no13 + no14 + no15 + no16;

    int firstColumnSums = no1 + no5 + no9 + no13;
    int secondColumnSums = no2 + no6 + no10 + no14;
    int thirdColumnSums = no3 + no7 + no11 + no15;
    int forthColumnSums = no4 + no8 + no12 + no16;

    int diagonalSums1 = no1 + no6 + no11 + no16;
    int diagonalSums2 = no4 + no7 + no10 + no13;

    printf("Row sums: %d %d %d %d\n",firstRowSums,secondRowSums,thirdRowSums,forthRowSums);
    printf("Column sums: %d %d %d %d\n",firstColumnSums , secondColumnSums,thirdColumnSums,forthColumnSums);
    printf("Diagonal sums: %d %d\n",diagonalSums1,diagonalSums2);
}