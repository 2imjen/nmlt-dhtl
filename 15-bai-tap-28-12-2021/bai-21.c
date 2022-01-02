#include <stdio.h>
#include <string.h>

int main() {
    char s[100000], w[100000];
    int lenS, lenW;
    int check;
    int i, j;
    int index;

    printf("Nhap xau S: ");
    scanf("%[^\n]s",s);

    while ((getchar()) != '\n');

    printf("Nhap xau W: ");
    scanf("%[^\n]s",w);

    lenS = strlen(s);
    lenW = strlen(w);

    if(lenW > lenS || !strstr(s, w)) {
        printf("W khong xuat hien trong S\n");
        return 0;
    }

    // xử lí bằng hàm
    // index = strlen(s) - strlen(strstr(s, w));

    // xử lí bằng tay
    // for(i = 0; i < lenS; i++) {
    //     if(s[i] == w[0]) {
    //         check = 1;
    //         index = i;

    //         for(j = 1; j < lenW; j++)
    //             if(w[j] != s[i+j]) {
    //                 check = 0;
    //                 break;
    //             } else 
    //                 check = 1;

    //         if(check)
    //             break;
    //     }
    // }


    printf("W xuat hien trong S o vi tri %d\n", index);

    // if(check)
    //     printf("W xuat hien trong S o vi tri %d\n", index);
    // else {
    //     printf("W khong xuat hien trong S\n");
    // }

    return 0;
}