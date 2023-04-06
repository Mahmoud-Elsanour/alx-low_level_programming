#include "main.h"

int find_sqrt(int num, int root);

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 *
 *@num: The number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: Integer
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 *@n: The number to return the square root of.
 *
 * Return: Integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, 0));
}
