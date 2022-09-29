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

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]); 
	s += 1;
	_puts_recursion(s);
}
