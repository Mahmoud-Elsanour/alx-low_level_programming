#include"main.h"

/**
 * _strncat - concatenate two strings
 *
 * @dest: 1st string
 * @src: second string
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
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
	while (n-- > 0 && s != '\0')
	{
		dest[i] = s;
		i++;
		j++;
		s = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
