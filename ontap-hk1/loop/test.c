#include <stdio.h>

int main() {
    int n1, n2;
    int n;

    n1 = 0, n2 = 1;

    printf("0 1");
    while(n1 + n2 < 1000) {
        n = n1 + n2;
        n1 = n2;
        n2 = n;
        printf(" %d", n);
    }

    return 0;
}