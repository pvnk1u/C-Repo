/**
 * 编写函数实现：
 * 返回指向传入函数的数组中最大元素的指针
 */

 #include <stdio.h>

 int *find_largest(int a[],int n);

 int main(void){
    int a[] = {1,1,4,2,3,6,5,3};
    int *largest_pointer = find_largest(a,8);
    printf("largest number: %d",*largest_pointer);
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