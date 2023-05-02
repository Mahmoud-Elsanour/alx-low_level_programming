#include"lists.h"

/**
 * free_listint2 - a function to free a list
 *
 * @head: the head of the function
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	if (head != NULL)
	{
		node = *head;

		while ((temp = node) != NULL)
		{
			node = node->next;
			free(temp);
		}

		*head = NULL;
	}
}
