#include <stdio.h>

int main() {
	int n, a[100], i;
	
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Nhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < n; i++)
		if(a[i] < 0)
			a[i] = 0;
			
	printf("\nMang sau khi thay the la:");
	for(i = 0; i < n; i++)
		printf(" %d", a[i]);
	
	return 0;
}
