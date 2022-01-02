#include <stdio.h>
#include <string.h>

int main() {
    char w[1000][1000];
    int n;
    int i, min, indexMin;
    int lenW[1000];

    printf("N = ");
    scanf("%d", &n);

    while ((getchar()) != '\n');

    for (i = 0; i < n; i++) {
        printf("Ten ngon ngu lap trinh thu %d: ", i+1);
        scanf("%[^\n]s", w[i]);

        while ((getchar()) != '\n');

        lenW[i] = strlen(w[i]);
    }

    min = lenW[0], indexMin = 0;
    for(i = 1; i < n; i++)
        if(lenW[i] <= min) {
            indexMin = i;
            min = lenW[i];
        }

    printf("Ngon ngu ngan nhat cuoi cung la: %s", w[indexMin]);

    return 0;
}