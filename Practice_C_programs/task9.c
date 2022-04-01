#include <stdio.h>
/**
 * program that requests three integers and prints their average to one decimal place
 */

int main(void)
{
	double a, b, c;
	printf("Hi, Please input the first number: ");
	scanf("%lf", &a);
	printf("Hi, Please input the second number: ");
	scanf("%lf", &b);
	printf("Hi again, Please input the third number: ");
	scanf("%lf", &c);
	printf("Average is:(%f + %f + %f) / 3.0 = %5.1f\n", a, b, c, (a + b + c) / 3.0);
	return (0);
}
