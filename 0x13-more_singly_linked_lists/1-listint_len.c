#include "lists.h"

/**
 * size_t listint_len - A function to get the size
 *
 * @h: the head of the list
 *
 * Return: the number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
