#include"main.h"

/**
 * str_concat - concatenate two strings
 *
 * @s1: 1st string
 * @s2: second string
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	ptr = malloc(sizeof(char) * (i + j + 2));
	if (ptr == NULL)
		return (NULL);
	for (; i >= 0; i--)
		ptr[i + j] = s1[i];
	for (; j >= 0; j++)
		ptr[j] = s2[j];
	return (ptr);
}
