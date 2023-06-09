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
	char s = dest[0];
	int i = 0;
	int j = 0;

	while (s != '\0')
	{
		i++;
		s = dest[i];
	}
	s = src[j];
	while (s != '\0')
	{
		dest[i] = s;
		i++;
		j++;
		s = src[j];
	}
	return (dest);
}
