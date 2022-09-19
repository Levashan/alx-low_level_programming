#include "main.h"

/**
 * print_to_98 - n - 98
 *
 * @n: input number
 *
 * Description: natural number from n - 98
 *
 * Return: Successfull
 */

void print_to_98(int n)
{
	int i;
	int value;
	int value2;
	int value3;
	int value4;

	if (n > 98)
	{
		while (n >= 98)
		{
			if (n >= 100)
			{
				i = (n / 100) + '0';
				_putchar(i);
			}
			if (n >= 10)
			{
				value = (n / 10) + '0';
				_putchar(value);
				value2 = (n % 10) + '0';
				_putchar(value2);
			}
			else
			{
				_putchar(n + '0');
			}
			
			if (n >= 99)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			if (n < 0)
			{
				_putchar('-');
			}
			if (n > 10 || n < -10)
			{
				if (n < 0)
				{
					value3 = n * -1;
					value3 = (value3 / 10) + '0';
					_putchar(value3);
					value4 = n * -1;
					value4 = (value4 % 10) + '0';
				}
				else
				{
					value3 = (n / 10) + '0';
					_putchar(value3);
					value4 = (n % 10) + '0';
					_putchar(value4);
				}
			}
			else
			{
				_putchar(n + '0');
			}
			if (n <= 97)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	_putchar('\n');
}
