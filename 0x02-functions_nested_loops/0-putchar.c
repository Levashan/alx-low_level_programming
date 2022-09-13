#include <stdio.h>
#include "main.h"
/**
 * main - prints _putchar
 *
 * Description: This returns _putchar
 *
 * Return: Successful
 */

int main(void)
{
	int i = 0;
	char a[8] = "_putchar";

	while (i < 8)
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
