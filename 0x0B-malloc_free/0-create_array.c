#include <stdlib.h>
#include "main.h"
/**
 * create_array - creat array
 * @size: var
 * @c: var
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	if (p == NULL || size == 0)
		return (NULL);
	return(p);
}
