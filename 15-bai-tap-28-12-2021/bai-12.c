#include <stdio.h>
#include <math.h>

int main () {
    int x;
    double res;
    
    printf("X = ");
    scanf("%d", &x);

    if(x == 3 || x < 0) {
        printf("Bieu thuc khong xac dinh.");
        return 0;
    }

    res = (1 + sqrt(x)) / (x - 3);

    printf("Ket qua la: %f", res);

    return 0;
}