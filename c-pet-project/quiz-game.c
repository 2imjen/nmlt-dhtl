// Quiz game

#include <stdio.h>
#include <string.h>

void toUpperCase(char *a) {
    if(*a >= 97 && *a <= 122)
        *a -= 32;
}

int main() {
    //init questions
    char questions[][100] = {"Tên đầy đủ của thằng Việt là gì ?",
                            "Thằng Việt sinh năm bao nhiêu ?",
                            "Thằng Việt có đẹp trai không ?",
                            "Thằng Việt có người yêu chưa ?"};

    char options[][100] = {"A. Việt Nguyễn", "B. Nguyễn Thảo Việt", "C. Nguyễn Bá Việt", "D. Nguyễn Thị Việt",
                            "A. 2003", "B. 2001", "C. 1999", "D. 2000",
                            "A. Có", "B. Không", "C. Không biết", "D. Xấu vcl",
                            "A. Có rồi", "B. Chưa", "C. Nó bê đê mà", "D. Có cái l có người yêu"};

    char answers[4] = {'C', 'D', 'A', 'B'};

    int score;
    char guess;
    int i, j;

    int amountQuestion = sizeof(questions) / sizeof(questions[0]);

    score = 0;

    printf("------ WELLCOME TO QUIZ GAME ABOUT VIET ------\n");
    for(i = 0; i < amountQuestion; i++) {
        printf("******************\n");

        printf("Question %d: %s\n", i+1, questions[i]);
        
        for(j = i*4; j < i*4+4; j++)
            printf("%s\n", options[j]);

        printf("Enter a guess: ");
        scanf("%c", &guess);

        //clearing buffer
        while(getchar() != '\n');

        //if user type lowercase
        toUpperCase(&guess);

        if(guess == answers[i]) {
            score++;
            printf("\nCORRECT!\n");
        } else
            printf("\nWRONG ANSWER\n");

        printf("******************\n");
        // printf("\nGuess: %c\n", guess);
    }

    printf("------ FINAL QUIZ ------\n");
    printf("Your score: %d / %d", score, amountQuestion);

}