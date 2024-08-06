/*
 Created by pvnk1u on 2024/8/6.
*/


#include <stdbool.h>  /*C99 ONLY*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13


int main(void) {
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards,rank,suit;

    const char rank_code[] = {'2','3','4','5','6','7','8',
                                '9','t','j','q','k','a'};

    const char suit_code[] = {'c','d','h','s'};

    /**
     * srand函数初始化c语言的随机数生成器。通过把time函数的返回值传递给srand可以避免在每次运行时发同样的牌
     */
    srand((unsigned) time(NULL));

    printf("Enter number of cards in head: ");
    scanf("%d",&num_cards);

    printf("Your hand:");
    while (num_cards > 0) {
        suit =rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;
        if (!in_hand[suit][rank]) {
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %c%c",rank_code[rank],suit_code[suit]);
        }
    }
    printf("\n");
    return 0;
}


