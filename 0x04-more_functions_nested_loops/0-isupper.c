#include"main.h"
#include<ctype.h>

/**
 * _islower - prints alphabet
 *
 * @c: checks input of function
 *
 * Return: 0
 */
int _islower(int c)
{
	if (isupper(c) == 0)
		return (1);
	else
		return (0);
}
