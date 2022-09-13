#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @i:  last digit of a number.
 *
 * Return: Always 0.
 */

int print_last_digit(int i)
{
	int lastValue = i % 10;

	if (lastValue < 0)
		lastValue = lastValue * -1;

	_putchar(lastValue + '0');
	return (lastValue);
}
