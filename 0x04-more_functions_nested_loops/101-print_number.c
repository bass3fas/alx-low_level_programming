#include "main.h"
/**
 * print_number - go
 * @n: number
 */


void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');

		n = -n;
	}
	while (n / 10 != 0)
	{
		_putchar('0' + n % 10);
			n = n / 10;
	}
	_putchar('\n');
}
