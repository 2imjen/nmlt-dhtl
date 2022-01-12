#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char s[1000];
    char c;
    int i, n;

    printf("Nhap xau s: ");
    scanf("%[^\n]s", s);
    
    while(getchar() != '\n');

    printf("Nhap ky tu c: ");
    scanf("%c", &c);

    // xóa khoảng trắng ở đầu
    while(s[0] == ' ') {
        strcpy(s, s + 1);
    }

    n = strlen(s);
    //xóa khoảng trắng ở cuối
    i = 1;
    while(s[n-i] == ' ') {
        s[n-i] = '\0';
        i++;
    }

    printf("\n%s", s);


    //xóa khoảng trắng giữa các từ
    n = strlen(s);

    // for(i = 0; i < n-1; i++)
    i = 0;
    while(i < n-1) {
        if(s[i] == ' ' && s[i+1] == ' ')
            strcpy(&s[i], &s[i+1]);
        else
            i++;
    }

    printf("\n%s", s);

    return 0;
}