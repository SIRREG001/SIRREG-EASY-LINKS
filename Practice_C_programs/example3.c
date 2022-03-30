#include <stdio.h>
/**
 * this program calculates the product of any two numbers of your choice
 */
 
int main(void)
{
	int a, b;
	printf("Please input the first number: ");
	scanf("%d", &a);
	printf("Please input the second number: ");
	scanf("%d", &b);
	printf("%d * %d = %d\n", a, b, a * b);
}
