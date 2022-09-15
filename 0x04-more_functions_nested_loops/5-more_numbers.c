#include "main.h"

/**
 * more_numbers - 10 lines of 0-14
 *
 * Description: Print 10 line of 0-14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int i;
	int x;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			j = x;
			if (j >= 10)
			{
				j -= 10;
				_putchar('1');
			}
			j += '0';
			_putchar(j);
		}
		_putchar('\n');
	}
}
