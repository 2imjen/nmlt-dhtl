#include <stdio.h>

int tongChuSo(int n) {
	int tmp = n;
	int res = 0;
	
	while(tmp) {
		res = res * 10 + tmp % 10;
		tmp /= 10;
	}
	
	return res;
}

void chiaHet3(int n) {
	int tongCS = tongChuSo(n);
	
	if(tongCS % 3 == 0)
		printf("%d chia het cho 3", n);
	else
		printf("%d khong chia het cho 3", n);
}

int main() {
	int n;
	
	printf("Nhap vao 1 so nguyen bat ki: ");
	scanf("%d", &n);
	
	chiaHet3(n);
	
	return 0;
}
