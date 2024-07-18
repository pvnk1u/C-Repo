/*
 Created by pvnk1u on 2024/7/18.

 简化后的length.c如下所示


*/
#include <stdio.h>

int main(void){
    int len =0;

    printf("Enter a message: ");
    while(getchar() != '\n'){
        len++;
    }
    printf("Your message was %d character(s) long.\n",len);

    return 0;
}