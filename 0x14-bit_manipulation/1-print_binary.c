#include "main.h"
/**
 * print_binary - func
 * @n: int
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shift;

	if (n==0)
	{
		print("0");
		return;
	}
	temp = n;
	for (shift = 0; (temp >>= 1) > 0; shift++)
		temp = temp >> 1;
	while (shift >= 0)
	{
		if ((n >> shift) & 1)
			printf("1");
		else
			printf("0");
		shift--;
	}
}
