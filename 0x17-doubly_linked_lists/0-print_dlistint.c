#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head node poiter
 * Return:  the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i = 0;

	temp = h;
	if (temp == NULL)
		return (i);
	while(temp->prev)
		temp = temp->prev;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
