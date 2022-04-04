#include <stdio.h>
/**
 * A program that requests a whole number and prints the square
 */

int main(void)
{
	int num;
	printf("Enter first number: ");
	scanf("%d", &num);
	printf("Square is %d * %d = %d\n", num, num, num * num);
	return (0);
}
