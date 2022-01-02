#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    char w[1000], s[1000];
    int p, q;
    int mn, mx;
    int lenW, lenS;

    printf("Nhap W = ");
    fgets(w, sizeof(w), stdin);

    while (getchar() != '\n');

    printf("Nhap S = ");
    fgets(s, sizeof(s), stdin);

    printf("P = ");
    scanf("%d", &p);
    printf("Q = ");
    scanf("%d", &q);

    lenW = strlen(w) - 1;
    lenS = strlen(s) - 1;

    mx = max(p, q);
    mn = p + q - mx;

    printf("%d %d\n", lenW, lenS);

    strcpy(&w[mx + lenS], &w[mx]);
    
    printf("%d %d\n", mx, mn);

    printf("%s", w);

    return 0;
}