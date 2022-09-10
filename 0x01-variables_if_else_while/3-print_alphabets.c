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

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
