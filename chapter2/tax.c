/**
* Created by pvnk1u on 2024/6/20.
编写一个程序，要求用户输入一个美金数量，然后显示出增加5%税率后的相应金额。
*/
#include <stdio.h>
#define TAX_BASIS (1+0.05)

int main(void) {
    float amount = 0.0f;
    printf("Enter an amount: ");
    scanf("%f",&amount);
    printf("With tax added: $%.2f",amount * TAX_BASIS);
    return 0;
}