#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: input 1
 *
 * @s2: input 2
 *
 * Return: char.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int x;
	int value;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			x = s1[i] - s2[i];
			value = 0;
			break;
		}
		else
		{
			value = 1;
		}
		i++;
	}
	if (value != 0)
		return (0);
	else
		return (x);
}

