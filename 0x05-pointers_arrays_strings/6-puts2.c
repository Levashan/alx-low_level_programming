#include "main.h"
#include <stdio.h>
/**
 * puts2 - character of a string,
 *
 * @str: input string
 *
 * Return: void
 */
void puts2(char *str)
{
	int x = 0;

	while (str[x])
	{
		if (x % 2 == 0)
		{
			putchar(str[x]);
		}
		x++;
	}
	putchar('\n');
}
