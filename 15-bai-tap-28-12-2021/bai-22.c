#include <stdio.h>
#include <string.h>

int main() {
    char w[1000];
    int lenW, i;

    printf("Nhap W = ");
    fgets(w, sizeof(w), stdin);

    lenW = strlen(w);

    for(i = 0; i < lenW;)
        if(w[i] >= 48 && w[i] <= 57) {
            strcpy(&w[i], &w[i+1]);
        } else
            i++;

    printf("W sau khi xoa cac chu so = %s", w);

    return 0;
}