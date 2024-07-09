/*
 Created by pvnk1u on 2024/7/9.

编写程序，找出用户输入的一串数中的最大数。程序需要提示用户一个一个地输入数。当用户输入0或负数时，程序必须显示出已输入的最大非负数：
Enter a number: 60
Enter a number: 38.3
Enter a number: 4.89
Enter a number: 100.62
Enter a number: 75.2295
Enter a number: 0

The largest number entered was 100.62

*/

#include <stdio.h>

int main(void){
    float maxNo = 0.0f,inputNo=0.0f;
    for(;;){
        printf("Enter a number: ");
        scanf("%f",&inputNo);
        if(inputNo <= 0){
            break;
        }
        if(inputNo > maxNo){
            maxNo = inputNo;
        }
    }
    printf("The largest number entered was %.2f",maxNo);
    return 0;
}

