#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - print
 * @h: head
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
