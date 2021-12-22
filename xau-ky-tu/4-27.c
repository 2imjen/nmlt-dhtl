#include <stdio.h>
#include <string.h>

int main() {

	char s[100];
	char ch;
	int dem, i, len;
	
	printf("Moi nhap vao 1 chuoi\n");
	fgets(s, sizeof s, stdin);
	
	printf("Nhap vao 1 ky tu can dem trong chuoi tren: ");
	scanf("%c", &ch);
	
	len = strlen(s);
	dem = 0;
	for(i = 0; i < len; i++)
		if(s[i] == ch)
			dem++;
	
	printf("So lan xuat hien cua \"%c\" trong chuoi tren: %d", ch, dem);

	return 0;
}
