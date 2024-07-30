/*
 Created by pvnk1u on 2024/7/30.

 编写程序，用牛顿方法计算正浮点数的平方根：
Enter a positive number:3
Square root: 1.73205

设x是用户输入的数。牛顿方法需要先给出x平方根的猜测值y（我们使用1）.后续的猜测值通过计算y和x/y的平均值得到。
下表给出了求解3的平方根的过程。

| x    | y       | x/y     | y和x/y的平均值 |
| ---- | ------- | ------- | -------------- |
| 3    | 1       | 3       | 2              |
| 3    | 2       | 1.5     | 1.75           |
| 3    | 1.75    | 1.71429 | 1.73214        |
| 3    | 1.73214 | 1.73196 | 1.73205        |
| 3    | 1.73205 | 1.73205 | 1.73205        |


注意，y的值逐渐接近x的平凡根。为了获得更高的精度，程序中应该使用double类型的变量代替float类型的变量。当y的新旧值之差的绝对值小于0.00001和y的乘积时程序终止。

提示：调用fabs函数求double类型数值的绝对值（为了使用fabas函数，需要在程序的开头包含<math.h>头）

*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double x, y = 1.0;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    while (fabs((y + x / y) / 2 - y) > .00001 * y)
        y = (y + x / y) / 2;

    printf("Square root: %f\n", y);
    return 0;

}
