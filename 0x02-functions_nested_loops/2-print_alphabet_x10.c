#include "main.h"

/**
 * print_alphabet_x10 - Write code 10 times
 *
 * Description: alphabet in 10 line
 *
 * Return: Successfull
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char a = 'a';

	while (i <= 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		i++;
		_putchar('\n');
		a = 'a';
	}
}
