//#include <stdio.h>
//#include <math.h>
//
//int main () {
//    long long n;
//    double res;
//    long long tmp;
//
//    printf("N = ");
//    scanf("%lld", &n);
//
//    res = sqrt(2 * n);
//    tmp = round(res);
//
//    printf("m lon nhat = %lld", tmp-1);
//
//    return 0;
//}

#include <stdio.h>

int main () {
    int n;
    long long tong;
    int i;

    printf("N = ");
    scanf("%d", &n);

    tong = 0;
    
//    for(i = 1; tong + i < n; i++)
//    	tong += i;
    
    i = 1;
    while(tong < n) {
    	tong += i;
		i++;	
	}

    printf("m lon nhat = %d", i-2);

    return 0;
}
