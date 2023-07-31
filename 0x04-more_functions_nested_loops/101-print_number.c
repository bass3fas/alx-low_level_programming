#include "main.h"
/**
 * print_number - go
 * @n: number
 */


void print_number(int n)
{
	int m, num; /* counter of 10 powers, power value */
	int c, largest;

	largest = 1000000000;
	c = -1;
	m = 1;

	if (n < 0)
	{
		_putchar(45);
		num = n * -1;
		if (num / largest > 0)
		{
			_putchar('0' + num / largest);
			num = num % largest;
		}
	}
	else
		num = n;

	while (num / m != 0)
		m = m * 10;

	while (m > 1)
	{
		if (c != -1)
		{
			c = num / m;
			_putchar('0' + c);
		}
		else
			c = num / m ;
		num = num % m;
		m = m / 10;
	}
	_putchar('0' + num);
}
