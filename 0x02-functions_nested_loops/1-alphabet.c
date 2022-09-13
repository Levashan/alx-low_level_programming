#include <stdio.h>
#include "main.h"
/**
 * main - Lowercase Alphabet
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
