/**
 Created by pvnk1u on 2024/6/20.
编写一个计算球形体体积的程序，其中球体半径由用户输入，参考公式v=4/3*3.14*r^3
*/
#include <stdio.h>
#define VOLUME_CONSTANT (4.0f / 3.0f)
#define PI 3.14f



int main(void) {
    float halfWidth =0.0f;
    printf("Enter radius: ");
    scanf("%f",&halfWidth);
    printf("%.1f",halfWidth * halfWidth * halfWidth * PI * VOLUME_CONSTANT);
}