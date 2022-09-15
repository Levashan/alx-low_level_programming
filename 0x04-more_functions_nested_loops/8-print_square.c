#include "main.h"

/**
 * print_square - Square
 *
 * @size: Input
 *
 * Description: size of the square
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int i;
	int x;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (x = size; x > 0; x--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
