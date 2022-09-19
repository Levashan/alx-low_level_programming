#include "main.h"
#include <stdio.h>

/**
 * _strlen - length of a string
 *
 * @s: input value
 *
 * Return: void
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}
