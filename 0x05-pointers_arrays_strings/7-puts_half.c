#include "main.h"
#include <stdio.h>

/**
 * puts_half - puts_half
 *
 * @str: input string
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int x = 0;
	int i = 0;
	int n;

	while (str[x])
	{
		x++;
	}
	x--;
	n = x / 2;
	while (i <= x)
	{
		if (i <= n)
		{
			i++;
		}
		else
		{
			if (n % 2 == 0)
			{
				putchar(str[i]);
				i++;
			}
			else
			{
				putchar(str[n]);
				i++;
			}
		}
	}
	putchar('\n');
}
