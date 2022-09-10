#include <stdio.h>
#include <stdlib.h>

/**
 * main - Possible combos
 *
 * Description: possible combos of a single digit
 *
 * Return: Successul
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
