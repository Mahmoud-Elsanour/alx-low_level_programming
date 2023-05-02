#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a list
 *
 * @head: pointer to the first node
 * @n: integer n to add in a new node
 *
 * Return: address of the new element or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = *head;

	*head = malloc(sizeof(listint_t));
	if (*head == NULL)
		return (NULL);
	(*head)->next = temp;
	(*head)->n = n;
	return (*head);
}
