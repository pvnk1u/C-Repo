/**
 * 用指针算术运算来实现将数组中所有元素置为0
 */

#include <stdio.h>

void store_zeros_with_pointer(int a[],int n);

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    printf("before store: ");
    for (int i = 0; i < 10; i++){
        printf(" %d",*(a+i));
    }
    printf("\n");
    store_zeros_with_pointer(a,10);
    printf("after store: ");
    for (int i = 0; i < 10; i++){
        printf(" %d",*(a+i));
    }
    return 0;
}

void store_zeros_with_pointer(int a[],int n){
    int *p = a;
    while (p < a+n){
        *p++ = 0;
    }
}

void store_zeros(int a[],int n){
    int i;

    for (i = 0; i < n; i++){
        a[i] = 0;
    }
    
}