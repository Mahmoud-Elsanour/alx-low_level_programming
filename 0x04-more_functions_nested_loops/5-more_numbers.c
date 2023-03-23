#include"main.h"

/**
 * more_numbers - A function that prints all digits except 2 & 4
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;

	for (i = 0; i < 15; i++)
	{
		if (i > 9)
			_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
}
