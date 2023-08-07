#include "main.h"
/**
 * create_array - does something
 * @size :var
 * @c: var
 * Return:char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array = malloc(size * sizeof(char));

	if (array == NULL || size == 0)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	array[i] = '\0';
	return (array);
}
