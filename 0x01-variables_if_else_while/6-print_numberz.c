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
	int n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
