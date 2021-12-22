#include <stdio.h>
#include <math.h>

int ucln(int a, int b) {
	int tmp;
	
	while(b != 0) {
		tmp = b;
		b = a % b;
		a = tmp;
	}
	
	return abs(a);
}

int main() {
	int tu, mau;
	int res;
	
	printf("Moi nhap tu so: ");
	scanf("%d", &tu);
	
	do {
		printf("Moi nhap mau so: ");
		scanf("%d", &mau);
		
		if(mau == 0)
			printf("Gia tri mau cua ban nhap vao phai khac 0.\n");
	} while(mau == 0);
	
	res = ucln(tu, mau);
	
	if(res == 1)
		printf("Phan so toi gian");
	else
		printf("Phan so chua toi gian");
	
	return 0;
}
