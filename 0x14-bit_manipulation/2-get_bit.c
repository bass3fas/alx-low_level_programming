#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit at a given index
 * @n: number to evaluat
 * @index: 0 to bit
 * Return: value of index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);
	holed = n >> index;
	return (hold & 1);
}
