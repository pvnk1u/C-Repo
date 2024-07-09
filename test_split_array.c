/*
 Created by pvnk1u on 2024/7/9.
*/

#include <stdio.h>

int main(void) {
    int a[6] = {1, 2, 3, 4, 5, 6}, i;
    for (i = 0; i < 6; i++) {
        printf(",%d" + !i, a[i]);
    }

    printf("\n");
    printf(",,ABC" + 1);

    
    return 0;
}
