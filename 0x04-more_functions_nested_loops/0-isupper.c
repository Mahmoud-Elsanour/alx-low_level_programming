#include"main.h"
#include<ctype.h>

/**
 * _isupper - prints alphabet
 *
 * @c: checks input of function
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (isupper(c) == 0)
		return (1);
	else
		return (0);
}
