/*
 * Check planet names
 Created by pvnk1u on 2024/11/2.
*/

#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc,char *argv[]) {
    char *planets[] = {"Mercury","Venus","Earth",
                        "Mars","Jupiter","Saturn",
                        "Uranus","Neptune","Pluto"};
    int i,j;

    for (int i = 1; i < argc; i++) {
        for (int j = 0; j < NUM_PLANETS; j++) {
            if (strcmp(argv[i],planets[j]) == 0) {
                printf("%s is planet %d\n",argv[i],j+1);
                break;
            }
        }
        if (j == NUM_PLANETS) {
            printf("%s is not a planet\n",argv[i]);
        }
    }
    return 0;
}
