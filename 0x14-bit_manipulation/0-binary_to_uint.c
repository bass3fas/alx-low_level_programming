#include "main.h"
/**
 * binary_to_uint - func
 * @b: ptr
 * Return: uint
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			dec = (dec << 1) | (b[i] - '0');
	}
	return (dec);
}
