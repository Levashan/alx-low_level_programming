#include "main.h"

/**
 * cap_string - capitalizes all words
 *
 * @c: an array of char
 *
 * Return: char.
 */
char *cap_string(char *c)
{
int i = 0;
int value = 1;

	while (c[i])
	{
		if (value == 1)
		{
			if (c[i] > 96 && c[i] < 123)
			{
				c[i] = c[i] - 32;
			}
			value = 0;
		}
		if (c[i] == ' ' ||
		c[i] == '\t' ||
		c[i] == '\n' ||
		c[i] == ',' ||
		c[i] == ';' ||
		c[i] == '.' ||
		c[i] == '!' ||
		c[i] == '?' ||
		c[i] == '"' ||
		c[i] == '(' ||
		c[i] == ')' ||
		c[i] == '{' ||
		c[i] == '}')
		{
			value = 1;
		}
		i++;
	}
	return (c);
}
