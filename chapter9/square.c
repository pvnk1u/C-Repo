/*
 Created by pvnk1u on 2024/9/1.
*/

#include <stdio.h>

int main(void){
    double x = 3.0;
    printf("Square: %d\n",square(x));
    return 0;
}

int square(int n) {
    return n*n;
}