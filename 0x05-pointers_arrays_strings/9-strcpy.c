#include"main.h"
#include<unistd.h>

/**
 * _strcpy - copy a string
 *
 * @dest: the destination
 * @src: thr source
 *
 * Return: dest, the coppied string
 */
char *_strcpy(char *dest, char *src);
{
	int i = 0;
	char c = src[i];

	do
	{
		c = str[i];
		dest[i] = src[i];
		i++;
	} while (c != '\0');
}
