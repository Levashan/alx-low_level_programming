#include "main.h"

/**
 * print_diagonal - straight line
 *
 * @n: input
 *
 * Description: draws a straight line in the terminal.
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar(' ');
		n--;
	}
	_putchar('\\');
	_putchar('\n');
}
