/*
 Created by pvnk1u on 2024/7/26.

在十字拼字游戏中，玩家利用小卡片组成单词，每个卡片包含字母和面值。面值根据字母稀缺程度的不同而不同。
（面值有：1——AEILNORSTU，2——DG，3——BCMP，4——FHVWY，5——K，8——JX，10——QZ）

编写程序通过对单词中字母的面值求和来计算单词的值：
Enter a word: pitfall
Scrable value: 12

注意：需要使用toupper将字符转换为大写
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c;
    int score = 0;
    printf("Enter a word: ");
    while ((c= getchar()) != '\n') {
        switch (toupper(c)) {
            case 'A': case 'E':case 'I':case 'L':case 'N':case 'O':case 'R':case 'S':case 'T':case 'U':
                score +=1;
                break;
            case 'D': case 'G':
                score += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                score += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                score += 4;
                break;
            case 'K':
                score += 5;
                break;
            case 'J': case 'X':
                score += 8;
                break;
            case 'Q': case 'Z':
                score += 10;
                break;
            default:
                break;
        }
    }
    printf("Scrable value: %d",score);
    return 0;
}

