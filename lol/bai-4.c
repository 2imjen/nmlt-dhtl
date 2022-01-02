#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    char c;
    int lenS, i;
    int count;

    printf("Nhap vao xau S = ");
    fgets(s, sizeof(s), stdin);
    printf("Nhap vao ki tu c = ");
    scanf("%c", &c);

    lenS = strlen(s) - 1;
    
    count = 0;
    for(i = 0; i < lenS; i++)
        if(s[i] == c)
            count++;
    printf("So lan xuat hien cua ky tu '%c' trong xau S la: %d", c, count);

    count = 0;
    for(i = 0; i < lenS; i++)
        if((s[i] != ' ' && s[i+1] == ' ') || (s[i] != ' ' && s[i+1] == '\n'))
            count++;
    printf("\nXau S co %d tu!", count);
    
    // printf("\n");
    // for(i = 0; i < lenS+1; i++)
    //     printf("%d ", s[i]);

    return 0;
}