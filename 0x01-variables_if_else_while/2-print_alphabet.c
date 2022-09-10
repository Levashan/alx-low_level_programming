#include <stdlib.h>
#include <stdio.h>

/**
 * main - Alphabet in lowercase
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: Succesfull
 */

int main(void)
{
	int c;
	
	c = 'a';
	while(c <= 'z')
	{
		putchar(c);
		putchar('\n');
		c++;
	}

	return (0);
}
