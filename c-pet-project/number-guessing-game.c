//Number guessing game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int MIN = 1;
    const int MAX = 100;
    int answer;
    int guess;
    int guesses;

    srand(time(0));

    //random number between MAX and MIN
    answer = (rand() % MAX) + MIN;

    guess = 0;

    printf("WELLCOME TO NUMBER GUESSING GAME\n");
    do {
        printf("Enter a guess: ");
        scanf("%d", &guess);

        if(guess > answer)
            printf("Too high!\n");
        else if(guess < answer)
            printf("Too low!\n");
        else
            printf("CORRECT!\n");

        guesses++;
    } while(guess != answer);

    printf("-----------------------\n");
    printf("Answer\n: %d", answer);
    printf("Guesses\n: %d", guesses);
    printf("-----------------------\n");

    //History

    return 0;
}