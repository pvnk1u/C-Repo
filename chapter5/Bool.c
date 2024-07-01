/*
 Created by pvnk1u on 2024/7/1.
*/

// C99之后，可以直接引入<stdbool.h>使用bool变量
#include <stdbool.h>
#include <stdio.h>

// C89中没有单独的布尔类型，可以通过自定义宏的方式使用布尔变量
#define BOOL int

int main(void){
   BOOL flag;
    flag = 0;
    if (!flag) {
        printf("1111");
    }

    // C99中stdbool.h提供的bool类型变量,本质上stdbool.h是对C99提供的_Bool类型再次使用宏封装了一层
    bool result = true;
}