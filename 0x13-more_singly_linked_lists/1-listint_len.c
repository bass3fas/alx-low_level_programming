#include "lists.h"
/**
 * listint_len - something
 * @h: var
 * Return: size
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
