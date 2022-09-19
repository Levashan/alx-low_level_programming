#include "main.h"
#include <stdio.h>

/**
 * swap_int -  two integers
 *
 * @a: first input
 *
 * @b: second input
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	int x = *b;

	*a = x;
	*b = i;
}
