#include "main.h"
#include <stdio.h>
/**
 * print_dog - prints a dog
 *
 * @d : a pointer to a dog
 *
 * Return: void
 */
print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name = NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s", d->name);
		printf("Name: %f", d->Age);
		if (d->name = NULL)
			printf("Owner: (nil)");
		else
			printf("Name: %s", d->Owner);
	}
}
