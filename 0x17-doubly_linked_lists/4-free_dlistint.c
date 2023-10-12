#include "lists.h"
/**
 * free_dlistint - frees all the elements of a dlistint_t list
 * @h: head node poiter
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
