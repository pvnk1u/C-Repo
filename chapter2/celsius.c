//
// Created by pvnk1u on 2024/6/20.
// Page 25
//
#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
    float fahrenheit,celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

	// 使用%.1f显示celsius的值时，小数点后只显示一位数字
    printf("Celsius equivalent: %.1f\n",celsius);
    return 0;
}