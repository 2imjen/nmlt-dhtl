#include <stdio.h>
#include <string.h>

const int MAX = 256;

int main() {
	char s[100];
	int b[MAX];
	int i, len, max;
	char chmax;
	
	memset(b, 0, sizeof b);
	
	printf("Moi nhap vao 1 chuoi\n");
	fgets(s, sizeof s, stdin);
	
	len = strlen(s);
	
	for(i = 0; i < len; i++)
		b[(int)s[i]]++;
	
	max = 0;
	
	for(i = 0; i < len; i++)
		if(b[(int)s[i]] > max) {
			chmax = s[i];
			max = b[(int)s[i]];
		}
		
	printf("Ki tu xuat hien nhieu nhat trong chuoi: %c", chmax);
	
	return 0;
}
