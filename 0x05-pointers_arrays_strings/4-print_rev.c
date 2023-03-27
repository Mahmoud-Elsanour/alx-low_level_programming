#include"main.h"
#include<unistd.h>

/**
 * print_rev - print a string reversed
 *
 * @str: the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = _strlen(*s);
	char c = str[i];

	while (i != -1)
	{
		write(1, &c, 1);
		i--;
		c = str[i];
	}
	c = '\n';
	write(1, &c, 1);
}
