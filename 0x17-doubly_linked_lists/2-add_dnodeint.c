#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head node poiter
 * @n: number to add
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	h = *head;
	if (h)
	{
		while (h->prev)
			h = h->prev;
	}
	new->next = h;
	if (h)
		h->prev = new;
	*head = new;
	return (new);
}
