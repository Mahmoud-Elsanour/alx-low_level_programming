#include"main.h"
/**
 * jack_bauer - a function to print time
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	for (h = 0; h < 24; h++)
	{
		for (i = 0; i < 60; i++)
		{
			_putchar((h - h % 10) + '0');
			_putchar(h % 10);
			_putchar((i - i % 10) + '0');
			_putchar(i % 10);
		}
	}
}
