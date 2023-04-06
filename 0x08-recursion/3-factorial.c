#include"main.h"

/**
 * factorial - calculates the factorial of a number
 *
 * @n: the number
 *
 * Return: integer
 */
int factorial(int n)
{
	if(n == 0)
	{
		return (0);
	}
	return (n * factorial(n - 1));
}
