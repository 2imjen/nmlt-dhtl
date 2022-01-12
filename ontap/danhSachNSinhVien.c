#include <stdio.h>
#include <string.h>

int main() {
    char a[1000][1000];
    int n;
    int i, j;
    char b[1000];

    printf("Nhap so luong SV: ");
    scanf("%d", &n);

    fflush(stdin);

    //nhập
    for(i = 0; i < n; i++) {
        printf("Nhap ten SV %d:", i+1);
        gets(a[i]);
    }

    //sắp xếp
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-1; j++) {
            if(strcmp(a[j], a[j+1]) > 0) {
                strcpy(b, a[j]);
                strcpy(a[j], a[j+1]);
                strcpy(a[j+1], b);
            }
        }
    }

    // in ra màn hình
    for(i = 0; i < n; i++)
        printf("Ten SV %d: %s\n", i+1, a[i]);

    return 0;
}