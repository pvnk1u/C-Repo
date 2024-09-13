/*
 Created by pvnk1u on 2024/9/13.

 找出给定数组中最大和最小的值

Enter 10 numbers: 34 82 49 102 7 94 23 11 50 31
Largest: 102
Smallest: 7

*/

#include <stdio.h>
#define N 10

void max_min(int a[],int n,int *max,int *min);

int main(void) {
    int b[N],i,big,small;

    printf("Enter %d numbers: ",N);
    for (i=0;i<N;i++)
        scanf("%d",&b[i]);

    max_min(b,N,&big,&small);

    printf("Largest: %d\n",big);
    printf("Smallest: %d\n",small);

    return 0;
}

void max_min(int a[],int n,int *max,int *min) {
    int i;

    *max = *min =a[0];
    for (i=1;i<N;i++) {
        if (a[i] > *max)
            *max = a[i];
        else if (a[i] < *min)
            *min = a[i];
    }
}