#include"main.h"

/**
 * swap_int - swaps two integers
 *
 * @*a: first integer address
 * @*b: second integer address
 *
 * Resturn: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
