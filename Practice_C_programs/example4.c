#include <stdio.h>

/** 
 * testing
 */
int main(void)
{
	char name[50];
	printf("what is your name? ");
	fgets(name, 50, stdin);
	printf("Your name is: %s\n", name);
}
