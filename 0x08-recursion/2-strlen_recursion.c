#include "main.h"

/**
 * _strlen_recursion - prints string
 *
 * @s: input
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	static int i;

	if (s[i] != '\0')
	{
		i++;
		_strlen_recursion(s++);
	}
	return (i);
}
