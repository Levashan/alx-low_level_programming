#include "main.h"

/**
 * _puts_recursion - prints string
 *
 * @s: input
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while(s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
