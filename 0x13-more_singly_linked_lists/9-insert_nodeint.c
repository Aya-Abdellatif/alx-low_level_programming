#include "lists.h"

/**
 * insert_nodeint_at_index - Function insert node
 * @head: head nodo
 * @idx: index
 * @n: integer
 *
 * Return: listint
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *myNode = *head;
	unsigned int j = 0;

	if (!new)
		return (free(new), NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL && idx > 0)
	{
		free(new);
		return (NULL);
	}

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (; j < idx - 1; j++)
	{
		myNode = myNode->next;
		if (myNode == NULL && idx - j > 0)
		{
			free(new);
			return (NULL);
		}
	}

	new->next = myNode->next;
	myNode->next = new;

	return (new);
}
