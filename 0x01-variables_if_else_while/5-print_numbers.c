#include <stdlib.h>
#include <stdio.h>

/**
 *  main - Prints base 10
 *
 *  Description: prints 0-9
 *
 *  Return: Successfull
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");

	return (0);
}
