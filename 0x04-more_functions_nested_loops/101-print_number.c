#include "main.h"
/**
 * print_number - go
 * @n: number
 */


void print_number(int n)
{
	int c, m; /* counter of 10 powers, power value */

	c = 0;
	m = 1;

	if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}
	while (n / m != 0)
	{
		m = m * 10;
		c = c + 1;
	}
	while (m > 10)
	{
		m = m / 10;
		_putchar('0' + n / m);
		n = n % m;
	}
	_putchar('0' + n);
}
