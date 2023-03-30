#include"main.h"
#include<unistd.h>

/**
 * _strcpy - copy a string
 *
 * @dest: the destination
 * @src: thr source
 * @n: number of letters
 * Return: dest, the coppied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	do {
		dest[i] = src[i];
	} while (src[i++] != '\0' && --n);
	return (dest);
}
