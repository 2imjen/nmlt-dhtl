#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float ab, bc, ca;
    float max;

    printf("A = ");
    scanf("%f", &a);
    printf("B = ");
    scanf("%f", &b);
    printf("C = ");
    scanf("%f", &c);

    ab = pow(a, b);
    bc = pow(b, c);
    ca = pow(c, a);

    max = ab;
    if(bc > max) max = bc; 
    if(ca > max) max = ca; 

    printf("So long nhat: %g", max);

    return 0;
}