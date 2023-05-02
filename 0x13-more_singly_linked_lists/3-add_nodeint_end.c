#include "lists.h"

/**
 * add_nodeint_end - add a new node at the beginning of a list
 *
 * @head: pointer to the first node
 * @n: integer n to add in a new node
 *
 * Return: address of the new element or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = malloc(sizeof(listint_t));
	if (temo->next == NULL)
		return (NULL);
	temp->next->next = NULL;
	temp->next->n = n;
	return (*head);
}
