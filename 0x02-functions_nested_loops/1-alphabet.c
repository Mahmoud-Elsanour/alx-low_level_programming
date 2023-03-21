#include"main.h"

/**
 * print_alphabet - prints alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	char *sentence = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 24)
	{
		_putchar(sentence[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
