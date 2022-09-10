#include <stdlib.h>
#include <stdio.h>

/**
 * main - hexadecimal
 *
 * Description: print base 16 in hexadecimal
 *
 * Return: Successfull
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	n = 'a';
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
