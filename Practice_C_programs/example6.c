#include <stdio.h>

/**
 * testing to see what happens if you assign a operation value to a variable printing the result without the use of format specifiers for the operation
 */
int main(void)
{
	double a, c;
	int b;
	printf("please input a floating-point and an integer: ");
	scanf("%lf %d", &a, &b);
	c = a * b;
	printf("\nValue of C: %f\n", c);

/**
* printf("value of c: %f * %d = %f\n", a, b,a*b);
*/
}
