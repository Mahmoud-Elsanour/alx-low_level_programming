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
	unsigned int i;
	char *ptr = malloc(sizeof(*str));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i - 1] != '\0'; i++)
		ptr[i] = str[i];
	return (ptr);
}
