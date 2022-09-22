#include "main.h"

/**
 * reverse_array - reverses the content
 *
 * @a: an array of integers
 *
 * @n: the number of elements to swap
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0; i < n / 2; i++)
	{
		x = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = x;
	}
}
