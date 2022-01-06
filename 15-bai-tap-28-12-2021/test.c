#include <stdio.h>
#include <string.h>

int main() {
    int a = 47;
    int b = 1;
    int tmp;

    tmp = a;
    a = b;
    a = 1, b = 1;

    // b = tmp;

    return 0;
}