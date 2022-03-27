#include <stdio.h>

int main(void)
{
	int a, b, c;
	a = 13;
	b = a + 12;
	printf("%d %d\n", a, b);
	c = a + b;
	a = a + 11;
	printf("a = %d b = %d c = %d\n", a, b, c);
}
