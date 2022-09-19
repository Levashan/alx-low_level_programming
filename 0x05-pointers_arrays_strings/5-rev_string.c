#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse string
 *
 * @s: input
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int x;
	char c;

	while (s[i])
	{
		i++;
	}
	x = i;
	i--;
	for (i = 0; i < x / 2; i++)
	{
		c = s[i];
		s[i] = s[x - 1 - i];
		s[x - 1 - i] = c; 
	}
}
