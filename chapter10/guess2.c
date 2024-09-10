/*
 Created by pvnk1u on 2024/9/7.

这个程序产生一个1~100的随机数，用户尝试用尽可能少的次数猜出这个数。

不使用外部变量的版本
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100


/* prototypes */
void initialize_number_generator(void);
int new_secret_number(void);
void read_guesses(int secret_number);

int main(void)
{
    char command;
    int secret_number;

    printf("Guess the secret number between 1 and %d.\n\n",MAX_NUMBER);
    initialize_number_generator();
    do {
        secret_number = new_secret_number();
        printf("A new number has been chosen.\n");
        read_guesses(secret_number);
        printf("Play again? (Y/N) ");
        scanf(" %c",&command);
        printf("\n");
    }while (command == 'y' || command == 'Y');
    return 0;
}

/*******************************************
 * initialize_number_generator: Initializes the random
 *                              number generator using
 *                              the time of day.
 *******************************************/
void initialize_number_generator(void)
{
    srand((unsigned) time(NULL));
}

/*******************************************
 * choose_new_secret_number: Randomly selects a number
 *                           between 1 and MAX_NUMBER and
 *                           stores it in secret_number.
 *
 *******************************************/
int new_secret_number(void)
{
    return rand() % MAX_NUMBER +1;
}


/*******************************************
 * read_guesses: Repeatedly reads user guesses and tells
 *               the user whether each guess is too low,
 *               too high,or correct.When the guess is corrent,
 *               prints the total number of guesses and returns
 *
 *******************************************/
void read_guesses(int secret_number)
{
    int guess,number_guesses = 0;
    for (;;) {
        number_guesses++;
        printf("Enter guess: ");
        scanf("%d",&guess);
        if (guess == secret_number) {
            printf("You won in %d guesses!\n\n",number_guesses);
            return;
        }else if (guess < secret_number) {
            printf("Too low; try again.\n");
        }else {
            printf("Too high; try again.\n");
        }
    }
}