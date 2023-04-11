#include"main.h"

/**
 * _strdup - a function to duplicate
 *
 * @str: the sting
 *
 * Return: the address of the array
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	ptr = malloc(sizeof(char) * ++i);
	if (ptr == NULL)
		return (NULL);
	for (; i > 0; i--)
		ptr[i] = str[i];
	return (ptr);
}
