#include <stdio.h>

int main() {
	int n, a[100], i, sum, count;
	float res;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("Nhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	count = 0, sum = 0;
	for (i = 0; i < n; i+=2)
		if(a[i] % 2 != 0) {
			sum += a[i];
			count++;
		}
	if(count == 0)
		printf("Khong co phan tu le nao o vi tri chan");
	else {
		res = (float)sum / count;
		printf("Trung binh cong phan tu le o vi tri chan la: %f", res);
	}
	
	return 0;
}
