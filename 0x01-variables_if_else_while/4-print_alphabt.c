#include <stdlib.h>
#include <stdio.h>

/**
 * main - Alphabet in lowercase
 *
 * Description: prints the alphabet in lowercase without q and e
 *
 * Return: Succesfull
 */

int main(void)
{
	int c;

	c = 'a';
	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
			c++;
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
