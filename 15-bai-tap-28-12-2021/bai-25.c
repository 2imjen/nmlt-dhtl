#include <stdio.h>
#include <string.h>

int main() {
    char w[100000];
    int n, tmp;
    int lenSubW, i;

    printf("Nhap W = ");
    scanf("%[^\n]s", &w);

    n = strlen(w);
    tmp = n;

    printf("Cac xau con la:\n");
    i = 0;
    while(tmp--) {
        lenSubW = 1;
        while(lenSubW <= 3) {
            printf("%c", w[i]);
            i++;
            i %= n;
            lenSubW++;
        }

        printf("\n");
    }

    return 0;
}