/*
 Created by pvnk1u on 2024/7/28.

 编写程序统计句子中元音字母（a、e、i、o、u）的个数：
 Enter a sentence: And that`s the way it is.
 Your sentence contains 6 vowels.
*/

#include <ctype.h>
#include <stdio.h>

int main(void) {
    int count = 0;
    printf("Enter a sentence: ");
    char c;
    while ((c=getchar()) != '\n') {
        c = toupper(c);
        if (c == 'A'
            || c== 'E'
            || c== 'I'
            || c== 'O'
            || c== 'U') {
            count++;
        }
    }
    printf("Your sentence contains %d vowels",count);
    return 0;
}