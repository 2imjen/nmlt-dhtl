#include <stdio.h>
#include <math.h>

int main() {
	int n, a[100], i, j, count, check;
	
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Nhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	count = 0;
	for(i = 0; i < n; i++) {
		check = 1;
		for(j = 2; j <= sqrt(a[i]); j++)
			if(a[i] % j == 0) {
				check = 0;
				a[i] = 0;
				break;
			}
		if(check) count++;
	}
	
	printf("\nTrong mang co %d so nguyen to: ", count);
	for(i = 0; i < n; i++)
		if(a[i] != 0)
			printf(" %d", a[i]);
			
	return 0;
}
