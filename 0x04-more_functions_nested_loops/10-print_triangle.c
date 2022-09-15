#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of input
 *
 * Description: Printsa triangle.
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int i;
	int x;
	int j;

	for (i = 0; i < size; i++)
	{
		x = (size - i) - 1;
		j = i + 1;
		while (x > 0)
		{
			_putchar(' ');
			x--;
		}
		while (j > 0)
		{
			_putchar('#');
			hashes--;
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
