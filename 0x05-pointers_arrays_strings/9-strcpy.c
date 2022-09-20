#include "main.h"
#include <stdio.h>

/**
 * _strcpy - check the code
 *
 * @dest: input 1;
 *
 * @src: input 2;
 *
 * Return: char.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
