#include <stdio.h>
#include <math.h>

void nhapMaTran(float a[][100], int n) {
	int i, j;
	
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++) {
			printf("a[%d][%d] = ", i, j);
			scanf("%f", &a[i][j]);
		}
}

void inMaTran(float a[][100], int n) {
	int i, j;
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++)
			printf("%f ", a[i][j]);
			
		printf("\n");
	}
}

float max(float a, float b) {
	return a > b ? a : b;
}

int hangMax(float a[][100], int n) {
	int i, j, tong, tmp;
	int max;
	
	max = 0, tong = 0;
	for(i = 0; i < n; i++)
		tong += a[0][i];
	
	for(i = 1; i < n; i++) {
		tmp = 0;
		for(j = 0; j < n; j++)
			tmp += a[i][j];
			
		if(tmp > tong) {
			max = i;
			tong = tmp;
		}
	}
	
	return max;
}

int cotMin(float a[][100], int n) {
	int i, j, tong, tmp;
	int min;
	
	min = 0, tong = 0;
	for(i = 0; i < n; i++)
		tong += a[i][0];
		
	for(i = 1; i < n; i++) {
		tmp = 0;
		for(j = 0; j < n; j++)
			tmp += a[j][i];
			
		if(tmp < tong) {
			min = i;
			tong = tmp;
		}
	}
	
	return min;
}

int main() {
	float a[100][100];
	int n;
	int hMax, cMin;
	
	printf("Moi nhap n: ");
	scanf("%d", &n);
	
	nhapMaTran(a, n);
	
	inMaTran(a, n);
	
	hMax = hangMax(a, n);
	
	cMin = cotMin(a, n);
	
	printf("Hang co tong cac phan tu lon nhat: %d\n", hMax + 1);
	printf("Cot co tong cac phan tu nho nhat: %d\n", cMin + 1);
	
	return 0;
}
