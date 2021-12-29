#include <stdio.h>

int main() {
    int count;
    int x;
    
    count = 0;
    do {
        printf("Hay nhap mot so duong: ");
        scanf("%d", &x);

        if(x > 0) count++;
    } while(x > 0);
    
    printf("Ban da nhap %d so nguyen duong!", count);

    return 0;
} 