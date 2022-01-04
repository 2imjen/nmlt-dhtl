#include <stdio.h>
#include <string.h>

void trim(char w[]) {
    int lenW, i;

    while (w[0] == ' ')
        strcpy(&w[0], &w[1]);

    lenW = strlen(w);

    i = 1;
    while (w[lenW - i] == ' ') {
        w[lenW - i] = '\0';
        i++;
    }
}

void removeSpacesBetweenWord(char w[]) {
    int i, lenW;

    lenW = strlen(w);
    i = 0;
    while (i < lenW) {
        if (w[i] == ' ' && w[i+1] == ' ')
            strcpy(&w[i], &w[i+1]);
        else
            i++;
    }
}

int main() {
    char w[1000000];
    int lenW;

    printf("Nhap W = ");
    scanf("%[^\n]s", w);

    // printf("%d", strlen(w));

    lenW = strlen(w);

    trim(w);

    removeSpacesBetweenWord(w);

    printf("Chuan hoa = ");
    printf("%s", w);
}