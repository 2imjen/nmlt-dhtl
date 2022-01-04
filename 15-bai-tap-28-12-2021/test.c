#include <stdio.h>
#include <string.h>

int main() {
    char w[1000000];
    int lenW;

    printf("Nhap W = ");
    scanf("%[^\n]s", w);

    printf("%s", w+2);

    return 0;
}