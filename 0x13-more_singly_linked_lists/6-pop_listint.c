#include "lists.h"

/**
 * pop_listint - Function that deletes the head nodo
 * @head: head nodo
 *
 * Return: head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *new = *head;
	int number;

	if (!*head)
		return (0);

	number = (*head)->n;
	*head = new->next;
	free(new);
	return (number);
}
