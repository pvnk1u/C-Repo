//
// 计算箱子的空间质量 --> Page14
// Created by pvnk1u on 2024/6/17.
//
#include <stdio.h>

int main(void) {
    int height,length,width,volume,weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n",length,width,height);
    printf("Volume(cubic inches): %d\n",volume);
    printf("Dimensional weight (prounds): %d\n",weight);

    return 0;
}