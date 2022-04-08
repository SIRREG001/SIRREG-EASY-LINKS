#include <stdio.h>
/**
 * to test if C permits multiplication of integer and double
 */
int main(void)
{
	int a;
	printf("Please input an integer value: ");
	scanf("%d", &a);
	double b;
	printf("Please input a floating-point number: ");
	scanf("%lf", &b);
	printf("%d * %f = %4.2f\n", a, b, a * b);
}
