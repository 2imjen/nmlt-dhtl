#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char a[1000], b[1000];
    int length, i, j;

    printf("Nhap xau ky tu: ");
    gets(a);

    //cho xâu a thành xâu kí tự thường
    strlwr(a);

    //copy chuỗi a -> b
    strcpy(b, a);

    //đảo chuỗi
    strrev(b);

    //strcmp: so sánh chuỗi
    if(strcmp(a, b) == 0)
        printf("Doi xung");
    else
        printf("Khong doi xung");

    return 0;
}