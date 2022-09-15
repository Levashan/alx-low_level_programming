#include "main.h"

/**
 * print_line - straight line
 *
 * @n: input
 *
 * Description: draws a straight line in the terminal.
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
