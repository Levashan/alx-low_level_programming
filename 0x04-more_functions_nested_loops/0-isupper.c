#include "main.h"

/**
 * _isupper - 1 is uppercase
 *
 * @c: input
 *
 * Description: print 1 if Uppercase else 0
 *
 * Return: successful
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
