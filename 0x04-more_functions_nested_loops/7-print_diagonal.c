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
	int x;
	int y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
