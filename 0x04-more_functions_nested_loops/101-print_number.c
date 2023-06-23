#include "main.h"
/**
 * print_number - go
 * @n: number
 */


void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}

	if (n / 10)
		print_number(n / 10);
	_putchar(48 + n % 10);
}
