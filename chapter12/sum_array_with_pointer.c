/**
 * 用指针算术运算代替数组取下标重新编写计算数组之和的函数
 */

#include<stdio.h>

int sum_array(const int a[],int n);
int sum_array_with_pointer(const int a[],int n);

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int oldResult = sum_array(a,10);
    int newResult = sum_array_with_pointer(a,10);
    printf("oldResult:%d newResult:%d",oldResult,newResult);
    return 0;
}

int sum_array(const int a[],int n){
    int i,sum;
    
    sum = 0;
    for(int i =0;i< n;i++)
        sum += a[i];
    return sum;
}

int sum_array_with_pointer(const int a[],int n){
    const int *p = &a[0];
    int sum = 0;
    while (p < a+n)
    {
        sum += *p++;
    }
    return sum;
}
