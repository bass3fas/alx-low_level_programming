#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head node poiter
 * Return:  the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i = 0;

	temp = h;
	if (temp == NULL)
		return (i);
	while (temp->prev)
		temp = temp->prev;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
