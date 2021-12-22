#include <stdio.h>
#include <string.h>

int solve(char a[], char b[]) {
	
	int len1, len2, i;
	
	len1 = strlen(a)-1;
	len2 = strlen(b)-1;
	
	if(len1 != len2) return 0;
	
	for(i = 0; i < len1; i++)
		if(a[i] != b[i])
			return 0;
	
	return 1;
}

int main() {
	char a[1000], b[1000];
	int res = 0;
	
	printf("Nhap 1 xau a:");
	fgets(a, sizeof a, stdin);
	printf("Nhap 1 xau b:");
	fgets(b, sizeof b, stdin);
	
	res = solve(a, b);
	
	if(res)
		printf("Hai xau a va b giong nhau");
	else
		printf("Hai xau a va b khac nhau");
	
	return 0;
}
