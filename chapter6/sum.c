/*
 Created by pvnk1u on 2024/7/4.

编写一个程序对用户输入的整数数列进行求和计算。下面显示的是用户能看到的内容：
This program sums a series of integers.
Enter integers(0 to terminate):8 23 71 5 0
The sum is:107


*/

#include <stdio.h>

int main(void){
    int n,sum = 0;
    printf("This program sums a series of integers.\n");
    printf("Enter integers(0 to terminate):\n");
    scanf("%d",&n);
    while (n!=0) {
        sum += n;
        scanf("%d",&n);
    }
    printf("The sum is:%d\n",sum);
    return 0;
}