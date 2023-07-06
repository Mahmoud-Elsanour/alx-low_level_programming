#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if ((b[i] != '0' && b[i] != '1') || *b == '\0')
		{
			return (0);
		}
		j <<= 1;
		if (b[i] == '1')
			j += 1;
	}
	return (j);
}
