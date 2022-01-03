#include <stdio.h>
#include <string.h>

int main() {
    char w[100000];
    int lenW, i, j, count; 
    
    printf("Nhap W = ");
    scanf("%[^\n]s", w);

    lenW = strlen(w);

    i = 0, count = 0;
    while(i < lenW - count)
        if(w[i] >= 48 && w[i] <= 57) {
            strcpy(&w[i], &w[i+1]);
            count++;
        }
        else
            i++;

    printf("W sau khi xoa cac chu so = %s", w);

    return 0;
}