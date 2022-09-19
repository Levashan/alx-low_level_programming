#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 *
 * @str: string input
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;
	char a;

	while (str[i])
	{
		a = str[i];
		putchar(a);
		i++;
	}
	putchar('\n');
}
