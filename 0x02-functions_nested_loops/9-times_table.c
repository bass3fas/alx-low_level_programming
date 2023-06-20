#include "main.h"

/**
 * times_table - print time table
 */




void times_table(void)
	{
		int n, m, k;

		for (n = 0; n < 10; n++)
		{
			for (m = 0; m < 10; m++)
			{
				k = n * m;

				if (k > 9)
				{
					_putchar('0' + k / 10);
					_putchar('0' + k % 10);
				}
				else
					_putchar('0' + k);

				if (m != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar('\n');
			}
		}
	}
