#include "main.h"

/**
 * print_triangle - is whatever
 * @n: iteration
 */

void print_triangle(int n)
{
	int i, j, k;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 1; i < n - j; i++)
				_putchar(' ');
			for (k = 0; k <= j; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
