#include <stdio.h>
#include <string.h>

int solve(char a[], char b[]) {
	int len1, len2, i, j, ok;
	int dem;
	
	len1 = strlen(a)-1;
	len2 = strlen(b)-1;
	
	dem = 0;
	
	for(i = 0; i <= len1 - len2; i++) {
		if(a[i] == b[0]) {
			ok = 1;
			
			for(j = 1; j < len2; j++) {
				if(a[i+j] != b[j]) {
					ok = 0;
					break;
				}
			}
				
			if(ok) {
				dem += 1;
				i += len2 - 1;
			}
		}
	}
	
	return dem;
}

int main() {
	char a[1000], b[1000];
	int res = 0;
	
	printf("Nhap 1 xau:");
	fgets(a, sizeof a, stdin);
	printf("Nhap 1 xau con:");
	fgets(b, sizeof b, stdin);
	
	res = solve(a, b);
	
	if(res == 0)
		printf("Xau khong chua xau con");
	else
		printf("So lan xuat hien cua xau con: %d", res);
		
	return 0;
}
