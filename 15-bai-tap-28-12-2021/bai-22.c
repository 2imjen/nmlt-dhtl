#include <stdio.h>
#include <string.h>

void clearNumberIntoStr(char w[]) {
    int i, lenW;

    lenW = strlen(w);

    i = 0;
    while(i < lenW)
        if(w[i] >= 48 && w[i] <= 57)
            strcpy(&w[i], &w[i+1]);
        else
            i++;
}

int main() {
    char w[100000];
    
    printf("Nhap W = ");
    scanf("%[^\n]s", w);

    clearNumberIntoStr(w);

    printf("W sau khi xoa cac chu so = %s", w);

    return 0;
}