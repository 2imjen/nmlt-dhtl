#include <stdio.h>

int main() {
	float a[100], t;
	int n, i;
	
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Nhap a[%d] = ", i);
		scanf("%f", &a[i]);
	}
	
	t = 1;
	for(i = 0; i < n; i++)
		if(a[i] > 0)
			t *= a[i];
			
	printf("\nTich cac so duong co trong mang la: %f", t);
	
	return 0;
}
