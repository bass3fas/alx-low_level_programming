#include "main.h"
#include <stdio.h>
/**
 * clear_bit - some
 * @n: dec
 * @index: ind
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (i = 1; hold > 0; hold--)
		i = i * 2;
	if ((*n >> index) & 1)
		*n -= i;
	return (1);
}
