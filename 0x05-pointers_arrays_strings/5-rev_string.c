#include"main.h"
#include<unistd.h>

/**
 * rev_string - print a string reversed
 *
 * @s: the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	char c = s[i];
	char *tmp = s;
	int strln;

	while (c != '\0')
	{
		i++;
		c = s[i];
	}
	strln = i;
	c = s[--i];
	while (i != -1)
	{
		s[i] = tmp[strln - 1 - i];
		i--;
	}
}
