#include "main.h"

/**
 * times_table - 9 Times table
 *
 * Description: Prints the 9 times table
 *
 * Return: Successfull
 */

void times_table(void)
{
	int i;
	int x;
	int value;
	int value2;
	int value3;
	int BoolValue = 1;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			value = i * x;
			if (value >= 10)
			{
				value2 = (value / 10) + '0';
				value3 = (value % 10) + '0';
				_putchar(value2);
				_putchar(value3);
			}
			else
			{
				if (BoolValue == 1)
				{
					BoolValue = 0;
				}
				else
				{
					_putchar(' ');
				}
				_putchar(value + '0');
			}
			if (x <= 8)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		BoolValue = 1;
		_putchar('\n');
	}
}
