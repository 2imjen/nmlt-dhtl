#include <stdio.h>
#include <math.h>


int kiemTraSNT(int n) {
	int can, i;
	
	if(n < 2) return 0;
	
	can = sqrt(n);
	
	for(i = 2; i <= can; i++)
		if(n % i == 0)
			return 0;
	
	return 1;
}

int main() {
	int res = 0;
	int i;
	
	for(i = 1; i <= 100; i++)
		if(kiemTraSNT(i)) {
			printf("\n%d", i);
			res += i;
		}
			
	printf("Tong ca so nguyen to tu 1 den 100 la: %d", res);
	
	return 0;
}
