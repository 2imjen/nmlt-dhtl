#include <stdio.h>
#include <string.h>

void solve(char w[]) {
    int n, tmp;
    int lenSubW, i;

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
}

int main() {
    char w[10000];

    printf("Nhap W = ");
    fgets(w, sizeof(w), stdin);
    // scanf("%[^\n]s", &w);

    solve(w);

    return 0;
}