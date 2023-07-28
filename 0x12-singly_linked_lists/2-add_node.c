#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - print
 * @h: head
 * @str: string
 * Return:  nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (*head);
}
