#include <stdio.h>

int main() {
	int n, a[100], i, check;
	
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Nhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	check = 1;
	for(i = 0; i < n-1; i++)
		if(a[i] >= a[i+1]) {
			check = 0;
			break;
		}
		
	if(check)
		printf("\nMang tang dan");
	else
		printf("\nMang khong tang dan");
		
	return 0;
}
