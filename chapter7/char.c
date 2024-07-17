/*
 Created by pvnk1u on 2024/7/17.
*/

#include <stdio.h>

int main(void){
    char ch;
    int i;
    i = 'a';        // i is now 97
    printf("%d\n",i);
    ch = 65;		// ch is now 'A'
    printf("%c\n",ch);
    ch = ch + 1;	// ch is now 'B'
    printf("%c\n",ch);
    ch++;			// ch is now 'C'
    printf("%c\n",ch);
    return 0;
}