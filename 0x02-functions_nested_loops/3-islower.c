#include "main.h"

/**
 * int _islower - Check for lowercase
 *
 * @c - is an int
 *
 * Description: checks for lowercase c
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
