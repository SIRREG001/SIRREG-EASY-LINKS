#include <stdio.h>

/**
 * to test the multiplication between double and an ordinary undeclared floating -point
 */
int main(void)
{
	double b;
	printf("please input a floating-point number: ");
	scanf("%lf", &b);
	printf("%f * 0.06 = %f", b, b * 0.06);
}
