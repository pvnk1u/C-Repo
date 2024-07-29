/*
 Created by pvnk1u on 2024/7/29.

编写程序计算句子的平均词长：
Enter a sentence: It was deja vu all over again.
Average word length: 3.4

*/

#include <stdio.h>

int main(void) {
    int wordCount = 0;
    // 使用double声明，后续计算时才能使计算结果为精确到小数的double类型，如果此处使用int，则后续的计算结果将不会保留小数位
    double totalLength = 0.0;
    printf("Enter a sentence: ");
    char c;
    while ((c = getchar()) != '\n') {
        if (c == ' ') {
            wordCount++;
            continue;
        }
        totalLength++;
    }
    wordCount++;
    // 保留一位小数
    printf("%.1f",totalLength / wordCount);
    return 0;
}