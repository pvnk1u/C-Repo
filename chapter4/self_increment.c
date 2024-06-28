//
// Created by pvnk1u on 2024/6/28.
//

#include <stdio.h>

int main(void) {
    int i = 1;
    printf("i is %d\n",++i);   // prints i is 2
    printf("i is %d\n",i);     // prints i is 2

    i = 1;
    printf("i is %d\n",i++);   // prints i is 1
    printf("i is %d\n",i);     // prints i is 2

    i=1;
    printf("i is %d\n",--i); // prints "i is 0"
    printf("i is %d\n",i);   // prints "i is 0"

    i = 1;
    printf("i is %d\n",i--); // prints "i is 1"
    printf("i is %d\n",i);   // prints "i is 0"
}