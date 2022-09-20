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

	while (str[x])
	{
		x++;
	}
	x--;
	while (i < x)
	{
		if (i <= (x / 2))
		{
			i++;
		}
		else
		{
			if (i % 2 != 0)
			{
				putchar(str[x / 2]);
				i++;
			}
			else
			{
				putchar(str[x]);
				i++;
			}
		}
	}
	putchar('\n');
}
