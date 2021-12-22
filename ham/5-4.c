#include <stdio.h>

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int a, b, c;
	int res;
	
	printf("Nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so thu hai: ");
	scanf("%d", &b);
	printf("Nhap so thu ba: ");
	scanf("%d", &c);
	
	res = max(max(a, b), c);
	
	printf("So lon nhat trong 3 so vua nhap la: %d", res);
}
