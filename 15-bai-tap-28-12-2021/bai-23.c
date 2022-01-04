#include <stdio.h>
#include <string.h>

// void insert(char w[], char s[], int pos1, int pos2) {
//     int lenW, lenS;
//     char tmp[10000];

//     lenW = strlen(w);
//     lenS = strlen(s);

//     //chèn vào pos1
//     strcpy(tmp, &w[pos1]);

//     strcpy(&w[pos1], s);
    
//     w[pos1 + lenS] = '\0';

//     strcat(w, tmp);

//     //chèn vào pos2
//     tmp[0] = '\0';
//     strcpy(tmp, &w[pos2]);

//     strcpy(&w[pos2], s);
    
//     w[pos2 + lenS] = '\0';

//     strcat(w, tmp);
// }

void insert(char w[], char s[], int pos1) {
    int lenW, lenS;
    char tmp[10000];

    lenW = strlen(w);
    lenS = strlen(s);

    strcpy(tmp, &w[pos1]);
    strcpy(&w[pos1], s);
    
    w[pos1 + lenS] = '\0';

    strcat(w, tmp);
}

int main() {
    char w[1000], s[1000];
    int p, q;
    int lenW, lenS, tmp;

    printf("Nhap W = ");
    scanf("%[^\n]s", w);

    // Clearing buffer to enter string
    while (getchar() != '\n');

    printf("Nhap S = ");
    scanf("%[^\n]s", s);

    printf("P = ");
    scanf("%d", &p);
    printf("Q = ");
    scanf("%d", &q);

    lenW = strlen(w);
    lenS = strlen(s);
    
    if(p > lenW || q > lenW)
        return 0;

    //luôn để cho p > q
    if(p < q) {
        tmp = q;
        q = p;
        p = tmp;
    }

    //chèn pos lớn hơn trước p > q
    insert(w, s, p);
    insert(w, s, q);

    printf("Ket qua: %s", w);

    return 0;
}