#include <stdio.h>
#include <string.h>

// void trim(char w[], int *lenW) {
//     while(w[0] == ' ') {
//         strcpy(&w[0], &w[1]);
//         *lenW -= 1;
//     }


//     // while(w[*lenW - 1] == ' ')
//     //     *lenW -= 1;

//     // w[*lenW + 1] = '\0';
// }

// void removeSpacesBetweenWord(char w[], int *lenW) {
//     int i;

//     i = 0;
//     while(i < *lenW - 1) {
//         if(w[i] == ' ' && w[i+1] == ' ') {
//             strcpy(&w[i], &w[i+1]);
//             *lenW -= 1;
//         }
//         else
//             i++;
//     }

//     // w[*lenW + 1] = '\0';
// }

int main() {
    char w[1000000];
    int lenW;

    printf("Nhap W = ");
    fgets(w, sizeof(w), stdin);

    // printf("%d", strlen(w));

    lenW = strlen(w) - 1;

    if(w[lenW] == '\n')
        w[lenW] = '\0';

    trim(w, &lenW);

    removeSpacesBetweenWord(w, &lenW);

    printf("Chuan hoa = ");

    printf("%d\n", strlen(w));

    printf("%s", w);

}