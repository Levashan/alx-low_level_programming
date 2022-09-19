#include "main.h"
#include <stdio.h>
/**
 * print_rev - reverse string
 *
 * @s: input
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (--i >= 0)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
