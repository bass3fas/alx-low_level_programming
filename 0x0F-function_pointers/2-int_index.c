#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - something
 * @array: arr
 * @size: int
 * @cmp: func
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
