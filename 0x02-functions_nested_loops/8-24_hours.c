#include "main.h"

/**
 * jack_bauer - print minute of the Day
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int hours;
	int singleHours;
	int minutes;
	int singleMinutes;
	int i;
	int x;

	for (i = 0; i <= 23; i++)
	{
		for (x = 0; x <= 59; x++)
		{
			hours = (i / 10) + '0';
			_putchar(hours);
			singleHours = (i % 10) + '0';
			_putchar(singleHours);
			_putchar(':');
			minutes = (x / 10) + '0';
			_putchar(minutes);
			singleMinutes = (x % 10) + '0';
			_putchar(singleMinutes);
			_putchar('\n');
		}
	}
}
