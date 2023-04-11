#include"main.h"

/**
 * str_cat - concatenate two strings
 *
 * @s1: 1st string
 * @s2: second string
 *
 * Return: concatenated string
 */
char *str_cat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *ptr;

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	ptr = malloc(sizeof(char) * (i + j + 2));
	if (ptr == NULL)
		return(NULL)
	for (; i >= 0; i--)
		ptr[i] = s1[i];
	for (; j >= 0; j++)
		ptr[i + j] = s2[j];
	return (ptr);
}
