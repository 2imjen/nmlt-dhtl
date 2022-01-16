// tic - tac - toe
// player
// board
// checkwin
// init board
// print winner
// replay

// includes header file
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char board[3][3];

const char PLAYER = 'X';
const char COMPUTER = 'O';

void initBoard() {
    int i, j;

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            board[i][j] = ' ';
}

void printBoard() {
    printf(" %c | %c | %c", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

int checkFreeSpaces() {
    int freeSpaces = 9;
    int i, j;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (board[i][j] != ' ')
                freeSpaces--;

    return freeSpaces;
}

void playerMove() {
    int x, y;

    do {
        printf("Enter row #(1-3): ");
        scanf("%d", &x);
        x--;

        while(getchar() != '\n');
        
        printf("Enter column #(1-3): ");
        scanf("%d", &y);
        y--;

        if(board[x][y] != ' ') {
            printf("Invalid move!\n");
        }
        else {
            board[x][y] = PLAYER;
            break;
        }
    } while (board[x][y] != ' ');

    printf("\nYOU MOVE %d-%d\n", x+1, y+1);
}

void computerMove() {
    int x, y;

    srand(time(0));

    do {
        x = rand() % 3;
        y = rand() % 3;
    } while (board[x][y] != ' ');

    board[x][y] = COMPUTER;

    printf("\nCOMPUTER MOVE %d-%d\n", x+1, y+1);
}

char checkWinner() {
    int i;
    //check rows
    for (i = 0; i < 3; i++)
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return board[i][0];

    //check columns
    for (i = 0; i < 3; i++)
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return board[0][i];

    //check diagonal
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return board[0][0];

    if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return board[0][2];

    return ' ';
}

void printWinner(char winner) {
    if(winner == PLAYER)
        printf("\nYOU WIN!\n");
    else if(winner == COMPUTER)
        printf("\nYOU LOSE!\n");
    else
        printf("\nIT'S A TIE\n");
}

int main() {

    char winner = ' ';

    initBoard();

    while (winner == ' ' || checkFreeSpaces() != 0) {
        printBoard();

        playerMove();
        winner = checkWinner();
        if(winner != ' ')
            break;

        if(checkFreeSpaces() <= 0)
            break;

        computerMove();
        winner = checkWinner();
        if(winner != ' ')
            break;

        printf("\n----------------------\n");
    }

    //print result

    printBoard();
    printWinner(winner);

    return 0;
}