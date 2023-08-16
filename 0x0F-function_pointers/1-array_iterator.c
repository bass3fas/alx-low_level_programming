#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - something
 * @array: arr
 * @size: int
 * @action: func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
