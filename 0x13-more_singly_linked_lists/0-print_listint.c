#include "list.h"

/**
 * print_listint - A function to print a list
 *
 * @h : the head of the list
 *
 * Return : the number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *head = h;
	size_t count = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	printf("%d\n", head->n);
	return (count);
}
