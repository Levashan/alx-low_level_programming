#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 *
 * @s: input
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[i]);
	i++;
}
