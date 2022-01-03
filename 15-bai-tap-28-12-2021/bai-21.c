#include <stdio.h>
#include <string.h>

int findSubstrIntoStr(char s[], char w[]) {
    int i, j;
    int check;
    int index;
    int lenS, lenW;

    lenS = strlen(s);
    lenW = strlen(w);

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
    //             return index;
    //     }
    // }

    return index;
}

int main() {
    char s[100000], w[100000];
    int lenS, lenW;

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

    printf("W xuat hien trong S o vi tri %d\n", findSubstrIntoStr(s, w));

    return 0;
}