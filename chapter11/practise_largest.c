/**
 * 查找数组中的最大元素和第二大元素
 */

#include <stdio.h>

void find_two_largest(int a[],int n,int *largest,int *second_largest);

int main(void){
    int a[] = {1,2,3,4,5};
    int largest,second_largest;
    find_two_largest(a,5,&largest,&second_largest);
    printf("largest: %d; second_largest: %d",largest,second_largest);
    return 0;
}

void find_two_largest(int a[],int n,int *largest,int *second_largest){
    if (a[0] > a[1]){
        *largest = a[0];
        *second_largest = a[1];
    }else{
        *largest = a[1];
        *second_largest = a[0];
    }
    for (size_t i = 2; i < n; i++){
        if(a[i] > *largest){
            *second_largest = *largest;
            *largest = a[i];
        }else if (a[i]>*second_largest){
            *second_largest = a[i];
        }
    }
}