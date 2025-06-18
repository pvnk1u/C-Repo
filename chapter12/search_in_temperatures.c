/**
 * 假设下面的数组含有一周 7天 24小时的温度读数，数组的每一行是某一天的读数：
   int temperatures[7][24];
   编写一条语句，使用 search函数在整个 temperatures数组中寻找值 32。
 */

#include <stdio.h>

int *search_in_temperatures(int a[7][24],int key);

int main(int argc, char const *argv[])
{
    int a[7][24] = {
                    {12,12,12,12,12,12,12},
                    {12,12,12,12,12,12,12},
                    {12,12,12,12,12,12,12},
                    {12,12,12,12,12,12,12},
                    {12,12,12,12,12,12,12},
                    {12,12,12,31,12,12,12},
                    {12,12,12,12,12,12,12},};
    int *p = search_in_temperatures(a,31);
    printf("%d",*p);
    return 0;
}


int *search_in_temperatures(int a[7][24],int key){
    int *result_p;
    int (*p)[24] = a;
    while (p < a+7){
        int *pp = *p;
        while (pp < (*p + 24)){
            if (*pp == key){
                result_p = pp;
                break;
            }
            pp++;
        }
        p++;
    }
    return result_p;
}