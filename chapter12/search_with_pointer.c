
/**
 * 使用指针算术运算实现判断某个值在数组中是否存在的函数
 */

#include <stdio.h>
#include <stdbool.h>

bool search_with_pointer(const int a[],int n,int key);

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    bool exist = search_with_pointer(a,10,4);
    printf("exist result: %d",exist);
    return 0;
}

bool search_with_pointer(const int a[],int n,int key){
    const int *p = a;
    while (p < a + n){
        if (*p++ == key){
            return true;
        }
    }
    return false;
}