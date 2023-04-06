#include "lists.h"

/**
 * get_nodeint_at_index - Function return nth of the list
 * @head: head nodos
 * @index: index of the nodo
 * Return: list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int j;

	if (!head)
		return (0);
	for (j = 0; new; j++)
	{
		if (j == index)
			return (new);
		new = new->next;
	}
	return (NULL);
}
