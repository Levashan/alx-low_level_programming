#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Lowercase Alphabet
 *
 * Description: print the lowercase alphabet
 *
 * Return: Successful
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
