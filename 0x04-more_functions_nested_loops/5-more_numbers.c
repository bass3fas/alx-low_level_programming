#include "main.h"

/**
 * more_numbers - is whatever
 */

void more_numbers(void)
{
	int c, d;

	for (c = 0; c < 10; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d > 9)
				_putchar('0' + d / 10);
			_putchar('0' + d % 10);
		}
		_putchar('\n');
	}
}
