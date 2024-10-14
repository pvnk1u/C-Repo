/*
 Created by pvnk1u on 2024/10/14.

使用scanf时：
    Enter a sentence:
    To C, or not to C: that is the question.
    To
    C,
    or

使用scanf时：
    Enter a sentence:
    To C, or not to C: that is the question.
    To C, or not to C: that is the question.

*/

#include <stdio.h>
#define SENT_LEN 50

int main(void) {
    char sentence[SENT_LEN+1];




    printf("Enter a sentence: \n");

    /**
     * scanf版本
     * scanf函数会跳过空白字符（3.2节），然后读入字符并存储到str中，直到遇到空白字符为止。scanf函数始终会在字符串末尾存储一个空字符。
     */
    /*scanf("%s",sentence);


    printf("%s\n",sentence);

    scanf("%s",sentence);
    printf("%s\n",sentence);

    scanf("%s",sentence);
    printf("%s\n",sentence);*/

    /**
     * gets版本
     * gets函数不会在开始读字符串之前跳过空白字符（scanf函数会跳过）
     * gets函数会持续读入直到找到换行符才停止（scanf函数会在任意空白字符处停止）。此外，gets函数会忽略掉换行符，不会把它存储到数组中，用空字符代替换行符。
     */
    gets(sentence);
    printf("%s\n",sentence);

    return 0;
}