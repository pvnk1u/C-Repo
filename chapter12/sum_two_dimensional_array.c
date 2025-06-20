/**
 *  用指针算术运算代替数组取下标来计算二维数组中元素之和，要求使用单层循环
 */
#include <stdio.h>

#define ROWS 10
#define COLS 10

int sum_two_dimensional_array(const int a[10][10]);

int main(int argc, char const *argv[]){
    int a[ROWS][COLS] = {
                    {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
                    {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
                    {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
                    {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
                    {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
                    {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
                    {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
                    {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
                    {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
                    {91, 92, 93, 94, 95, 96, 97, 98, 99, 100}
                    };
    int sum = sum_two_dimensional_array(a);
    printf("%d",sum);
    return 0 ;
}

int sum_two_dimensional_array(const int a[ROWS][COLS]){
    int sum = 0;
    const int *pp = &a[0][0]; 
    while(pp <= &a[ROWS-1][COLS-1]){
        sum += *pp++;
    }
    return sum;
}
