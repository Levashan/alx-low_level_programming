#include <stdio.h>
/**
 * main - FizzBuzz
 *
 * FizzBuzz - fizzbuzz
 *
 * Fizz - Fizz
 *
 * Buzz - Buzz
 *
 * Description: multiples of three print Fizz
 * multiples of five print Buzz
 * multiples of both three and five print FizzBuzz
 *
 * Return: Always 0.
 */

void FizzBuzz(void);
void Fizz(void);
void Buzz(void);

int main(void)
{
	int i;
	int x;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			FizzBuzz();
		}
		else if ((i % 3) == 0)
		{
			Fizz();
		}
		else if ((i % 5) == 0)
		{
			Buzz();
		}
		else
		{
			if (i >= 10)
			{
				x = (i / 10) + '0';
				putchar(x);
				x = (i % 10) + '0';
				putchar(x);
				putchar(' ');
			}
			else
			{
				putchar(i + '0');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

void FizzBuzz(void)
{
	putchar('F');
	putchar('i');
	putchar('z');
	putchar('z');
	putchar('B');
	putchar('u');
	putchar('z');
	putchar('z');
	putchar(' ');
}

void Fizz(void)
{
	putchar('F');
	putchar('i');
	putchar('z');
	putchar('z');
	putchar(' ');
}

void Buzz(void)
{
	putchar('B');
	putchar('u');
	putchar('z');
	putchar('z');
	putchar(' ');
}
