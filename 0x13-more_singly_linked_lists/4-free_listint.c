#include"lists.h"

/**
 * free_listint - a function to free a list
 *
 * @head: the head of the function
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
