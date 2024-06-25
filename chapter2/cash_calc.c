//
// Created by pvnk1u on 2024/6/24.
// Page 25
//

#include <stdio.h>

int main(void) {
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d",&amount);
    int tweenty = amount / 20;
    int ten = (amount - tweenty * 20) / 10;
    int five = (amount - tweenty * 20 - ten * 10) / 5;
    int one = amount - tweenty * 20 - ten * 10;

    printf("$20 bills:%d\n",tweenty);
    printf("$10 bills:%d\n",ten);
    printf("$5 bills:%d\n",five);
    printf("$1 bills:%d\n",one);
}