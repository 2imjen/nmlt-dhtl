#include <stdio.h>
#include <string.h>

int main() {
    char dest[] = "abcdef";

    // strcpy(&dest[6], &dest[3]);

    // dest[9] = '\0';
    printf("%d\n", strlen(dest));

    printf("%c", dest[3]);

    strcat(dest, &dest[3]);

    printf("%d\n", strlen(dest));

    printf("%s", dest);

    return 0;
}