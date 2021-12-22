#include <stdio.h>

int main() {
	int n, a[100], min, i;
	
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Nhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	min = a[0];
	
	for(i = 1; i < n; i++)
		if(a[i] < min)
			min = a[i];
	
	printf("\nPhan tu nho nhat trong mang: %d", min);
	printf("\nVi tri cua cac phan tu nho nhat trong mang la: ");
	for(i = 0; i < n; i++)
		if(a[i] == min)
			printf(" %d", i);
	
	return 0;
}
