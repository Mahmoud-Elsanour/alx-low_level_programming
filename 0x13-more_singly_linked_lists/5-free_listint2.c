#include"lists.h"

/**
 * free_listint2 - a function to free a list
 *
 * @head: the head of the function
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		*head = (*head)->next;
		free(temp);
		temp = *head;
	}
}
