/*
 Created by pvnk1u on 2024/7/25.

编写程序把字母格式的电话号码翻译成数值格式：
Enter phone number: CALLATT
2255288

字母在键盘上的对应关系：2=ABC,3=DEF,4=GHI,5=JKL,6=MNO,7=PRS,8=TUV,9=WXYZ
原始电话号码中的非字母字符（例如数字或标点符号）保持不变：

Enter phone number: 1-800-COL-LECT
1-800-265-5328

可以假设输入的字母都是大写字母

*/

#include <stdio.h>

int main(void) {
    char c;
    printf("Enter phone number: ");
    while ((c = getchar()) != '\n') {
        switch (c) {
            case 'A': case 'B': case 'C':
                putchar('2');
            break;
            case 'D': case 'E': case 'F':
                putchar('3');
            break;
            case 'G': case 'H': case 'I':
                putchar('4');
            break;
            case 'J': case 'K': case 'L':
                putchar('5');
            break;
            case 'M': case 'N': case 'O':
                putchar('6');
            break;
            case 'P': case 'R': case 'S':
                putchar('7');
            break;
            case 'T': case 'U': case 'V':
                putchar('8');
            break;
            case 'W': case 'X': case 'Y':
                putchar('9');
            break;
            default:
                putchar(c);
            break;
        }
    }
    printf("\n");
    return 0;
}