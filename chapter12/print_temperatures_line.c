/**
 * 假设下面的数组含有一周 7天 24小时的温度读数，数组的每一行是某一天的读数：
 * int temperatures[7][24];
 * 编写一个循环来显示这个数组中第 i 行存储的所有温度读数。利用指针来访问该行中的每个元素
 */

#include <stdio.h>

void print_temperatures_line(int a[7][24],int lineNo);

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
    print_temperatures_line(a,3);
    return 0;
}


void print_temperatures_line(int a[7][24],int lineNo){
    int (*p)[24] = a + lineNo;
    int *pp = *p;
    while (pp < (*p + 24)){
        printf("%d ",*pp++);
    }
}