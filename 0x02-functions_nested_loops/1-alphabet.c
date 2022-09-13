#include <stdio.h>
#include "main.h"

/**
 * main - Lowercase Alphabet
 *
 * Description: print the lowercase alphabet
 *
 * Return: Successful
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		_putchar('\n');
		a++;
	}

	return (0);
}
