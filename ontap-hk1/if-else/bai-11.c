#include <stdio.h>
#include <math.h>

int main() {
    float x;

    printf("Nhap diem = ");
    scanf("%f", &x);

    if(x < 4)
        printf("F");
    else if(x < 5.5)
        printf("D");
    else if(x < 7)
        printf("C");
    else if(x < 8.5)
        printf("B");
    else
        printf("A");

    return 0;
}