#include "lists.h"

/**
 * free_listint - Function free list
 * @head: pointer
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
