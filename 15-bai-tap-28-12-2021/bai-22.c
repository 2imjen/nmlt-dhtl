#include <stdio.h>
#include <string.h>

int main() {
    char w[1000];
    int lenW, i, j, count; 
    
    printf("Nhap W = ");
    scanf("%[^\n]s", w);

    lenW = strlen(w);

    i = 0, count = 0;
    while(i < lenW - count)
        if(w[i] >= 48 && w[i] <= 57) {
            count++;
            for(j = i; j < lenW; j++)
                w[j] = w[j+1];
        } else
            i++;

    printf("W sau khi xoa cac chu so = %s", w);

    return 0;
}