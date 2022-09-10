#include <stdlib.h>
#include <stdio.h>

/**
 * main - Alphabet in Uppercase
 *
 * Description: prints the alphabet in Uppercase
 *
 * Return: Succesfull
 */

int main(void)
{
	int c;

	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
