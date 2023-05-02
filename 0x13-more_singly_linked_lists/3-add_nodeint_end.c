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
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	if (temp->next == NULL)
		*head = temp;
	else
	{
		while (temp->next->next != NULL)
			temp->next = temp->next->next;
		temp->next->next = temp;
		temp->next = NULL;
	}
	return (*head);
}
