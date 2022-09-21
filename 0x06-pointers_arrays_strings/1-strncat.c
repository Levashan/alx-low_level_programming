#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: input 1
 *
 * @src: input 2
 *
 * @n: input 3
 *
 * Return: char.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x;
	int j = 0;

	while (dest[i] != '\0')
	{
		++i;
	}
	while (src[j] != '\0')
	{
		++j;
	}
	for (x = 0; x < n; ++x, ++i)
	{
		if (j > n)
		{
			dest[i] = src[x];
		}
		else
		{
			break;
		}
	}

	return (dest);
}
