#include "main.h"

/**
 * _isdigit - check 0 - 9
 *
 * @c: input value
 *
 * Description: value between 0-9
 *
 * Return: Successfull
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
