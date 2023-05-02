#include "lists.h"

/**
 * pop_listint - deletes head of the node
 *
 * @head: pointer to the first node in the list
 *
 * Return: the head's node's data (n)
*/
int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *next;

	if (*head == NULL)
		return (0);
	next = (*head)->next;
	first_node = (*head)->n;
	free(*head);
	*head = next;
	return (first_node);
}
