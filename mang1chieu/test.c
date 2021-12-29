#include <stdio.h>
#include <math.h>
#include <string.h>

int change(int a) {
    return a+1;
};

int main() {
    int i = 5;
    change(i);
    printf("%d",i);

    return 0;
}