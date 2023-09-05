#include "main.h"
/**
 * set_bit - set value
 * @n: decimal
 * @index: index
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);
	for (p = 1; index > 0; index--)
		p = p * 2;
	*n += p;
	return (1);
}
