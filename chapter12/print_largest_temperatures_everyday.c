/**
 * 假设下面的数组含有一周 7天 24小时的温度读数，数组的每一行是某一天的读数：
 * int temperatures[7][24];
 * 编写一个循环来显示temperatures 数组一星期中每一天的最高温度。循环体应该调用 find_largest 函数，且一次传递数组的一行。
 */

#include <stdio.h>

void print_largest_temperatures_everyday(int a[7][24]);

 int *find_largest(int a[],int n);

int main(int argc, char const *argv[])
{
    int a[7][24] = {
                    {1,2,3,4,5,6,7},
                    {8,9,10,11,12,13,14},
                    {15,16,17,18,19,20,21},
                    {22,23,24,25,26,27,28},
                    {29,30,31,32,33,34,35},
                    {36,37,38,39,40,41,42},
                    {43,44,45,46,47,48,49}};
    print_largest_temperatures_everyday(a);
    return 0;
}


void print_largest_temperatures_everyday(int a[7][24]){
    int (*p)[24] = a;
    int *pp = *p;
    while(*p < a+7){
        printf("%d \n",*find_largest(*p++,24));
    }
}

 int *find_largest(int a[],int n){
    int *largest_pointer = &a[0];
    for (size_t i = 1; i < n; i++){
        if (a[i] > *largest_pointer){
            largest_pointer = &a[i];
        }
    }
    return largest_pointer;
 }