#include <stdio.h>
#include <string.h>
/*
 * to test if there is an error 
 * if we use char to assign value to a variable called name
 * and also strcpy to assign a different valueto variable
 */
int main(void)
{
	char name[50] = "Alice Wonder";
	strcpy(name, "Alice in Wonderland");
	printf("Hello, %s\n", name);
}
