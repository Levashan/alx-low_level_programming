#include "main.h"

/**
 * _islower - Check for lowercase
 *
 * @c: c is an int
 *
 * Return: Successful
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
