#include"main.h"

/**
 * print_to_98 - prints numbers from n to 98
 *
 * @n: the number to start from
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (i <= 98)
	{
		for (i = n; i < 99; i++)
		{
			_putchar(i + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

	}
	else
	{
		for (i = n; i > 97; i--)
		{
			_putchar(i + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(',');
			}
		}
	}
}
