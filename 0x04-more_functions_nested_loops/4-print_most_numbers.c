#include "main.h"

/**
 * print_most_numbers - is whatever
 */

void print_most_numbers(void)
{
	int C;

	for (C = 0; C <= 9; C++)
	{
		if (C != 2 || C != 4)
			_putchar('0' + C);
	}
	_putchar('\n');
}
