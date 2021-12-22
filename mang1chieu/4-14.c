#include <stdio.h>

int main() {
	int n, a[100], i, j, check, tmp;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("Nhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	printf("\nMang truoc khi sap xep:");
	for (i = 0; i < n; i++)
		printf(" %d", a[i]);
		
	for(i = 0; i < n-1; i++) {
		check = 0;
		for(j = 0; j < n-1-i; j++)
			if(a[j] > a[j+1]) {
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
				check = 1;
			}
		if(check == 0) break;
	}
	
	printf("\nSau khi sap xep tang dan:");
	for(i = 0; i < n; i++)
		printf(" %d", a[i]);
	
	return 0;
}
