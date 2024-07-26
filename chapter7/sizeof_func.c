/*
 Created by pvnk1u on 2024/7/26.

sizeof运算符允许程序存储指定类型值所需空间的大小(字节数)

 编写程序显示sizeof(int)、sizeof(short)、sizeof(long)、sizeof(float)、sizeof(double)、和sizeof(long double)的值
*/

#include <stdio.h>

int main(void) {
    printf("sizeof(int):%d\n",sizeof(int));
    printf("sizeof(short):%d\n",sizeof(short));
    printf("sizeof(long):%d\n",sizeof(long));
    printf("sizeof(float):%d\n",sizeof(float));
    printf("sizeof(double):%d\n",sizeof(double));
    printf("sizeof(long double):%d\n",sizeof(long double));
    return 0;
}