#include <stdio.h>
#include <string.h>

int main() {
    char w[1000];
    int lenW, i, j; 
    
    printf("Nhap W = ");
    scanf("%[^\n]s", w);

    lenW = strlen(w);

    i = 0;
    while(i < lenW)
        if(w[i] >= 48 && w[i] <= 57)
            strcpy(&w[i], &w[i+1]);
        else
            i++;

    printf("W sau khi xoa cac chu so = %s", w);

    return 0;
}