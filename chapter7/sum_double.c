/*
 Created by pvnk1u on 2024/7/25.

 修改sum2.c，对double型值组成的数列求和
*/

#include <stdio.h>

int main(void) {
    double n,sum = 0.0;

    printf("This program sums a series of doubles.\n");
    printf("Enter doubles (0 to terminate):\n");

    // 类型从int替换成double后，scanf中的转换说明也需要由%d改为%lf，printf只需要使用e、f和g即可用来写float类型或double类型
    scanf("%lf",&n);
    while (n != 0) {
        sum += n;
        scanf("%lf",&n);
    }
    printf("The sums is:%f\n",sum);
    return 0;
}