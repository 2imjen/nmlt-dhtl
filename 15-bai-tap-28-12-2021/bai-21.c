#include <stdio.h>
#include <string.h>

int main() {
    char s[100000], w[100000];
    int lenS, lenW;
    int check = 0;
    int i, j;
    int index;

    printf("Nhap xau S: ");
    fgets(s, sizeof(s), stdin);
    printf("Nhap xau W: ");
    fgets(w, sizeof(w), stdin);

    lenS = strlen(s) - 1;
    lenW = strlen(w) - 1;

    if(lenW > lenS) {
        printf("W khong xuat hien trong S");
        return 0;
    }

    for(i = 0; i < lenS; i++) {
        if(s[i] == w[0]) {
            index = i;
            for(j = 1; j < lenW; j++)
                if(w[j] != s[i+j]) {
                    check = 0;
                    break;
                } else 
                    check = 1;
            if(check)
                break;
        }
    }

    if(check)
        printf("W xuat hien trong S o vi tri %d\n", index);
    else {
        printf("W khong xuat hien trong S\n");
    }

    return 0;
}