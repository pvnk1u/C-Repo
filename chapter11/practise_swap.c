/**
 * 编写交换两个int变量的函数
 */

#include <stdio.h>

void swap(int *p,int *q);

int main(void){
    int p = 5,q=10;
    swap(&p,&q);
    printf("p=%d q=%d",p,q);
    return 0;
}

void swap(int *p,int *q){
    int tmp = *p;
    *p = *q;
    *q = tmp;
}