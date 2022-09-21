#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: input 1
 *
 * @src: input 2
 *
 * Return: char.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int x;

	while (dest[i] != '\0')
	{
		++i;
	}
	for (x = 0; src[x] != '\0'; ++x, ++i)
	{
		dest[i] = src[x];
	}
	dest[i] = '\0';

	return (dest);
}
