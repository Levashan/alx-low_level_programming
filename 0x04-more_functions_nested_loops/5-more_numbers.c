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
	int k;

	for (i = 0; i <= 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				j = (x / 10) + '0';
				_putchar(j);
				k = (x % 10) + '0';
				_putchar(k);
			}
			else
			{
				_putchar(x + '0');
			}
		}
		_putchar('\n');
	}
}
