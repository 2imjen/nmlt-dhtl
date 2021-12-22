#include <stdio.h>
#include <math.h>

int main() {
	int n, a[100], i, count, can;
	
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Nhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	count = 0;
	for(i = 0; i < n; i++) {
		can = sqrt(a[i]);
		if(can * can == a[i])
			count++;
		else
			a[i] = 0;
	}
	
	if(count == 0)
		printf("\nMang khong co so chinh phuong");
	else {		
		printf("\nMang co %d so chinh phuong:", count);
		for(i = 0; i < n; i++)
			if(a[i] != 0)
				printf(" %d", a[i]);
	}
	
	return 0;
}
