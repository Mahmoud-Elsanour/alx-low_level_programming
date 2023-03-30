#include"main.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: 1st string
 * @src: second string
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char s = *dest;
	int i;

	while (s != '\0')
	{
		i++;
		s = dest[i];
	}
	s = *src;
	while (s != '\0')
	{
		dest[i] = s;
		i++;
	}
	return (dest);
}
