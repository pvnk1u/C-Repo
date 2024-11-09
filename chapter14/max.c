/*
 Created by pvnk1u on 2024/11/9.
*/

/*
 * 定义一个通用的适用各个类型的比较大小的宏
 * 其中type为适用的类型
 */
#define GENERIC_MAX(type)			\
type type##_max(type x,type y)		\
{									\
    return x > y? x: y;				\
}

// 使用GENERIC宏定义一个针对float类型的max函数，此后就可以调用float_max函数了
GENERIC_MAX(float)

#include <stdio.h>

int main(void) {
    float x = 3.0f;
    float y = 4.0f;
    // 调用float_max函数比较float类型参数的大小
    float max = float_max(x,y);
    printf("%f",max);
    return 0;
}
