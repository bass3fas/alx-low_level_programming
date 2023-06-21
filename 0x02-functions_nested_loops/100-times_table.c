#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print time table
 * @f: length of table
 */




void print_times_table(int f)
{
	int n, m, k;

	if (f >= 0 && f <= 15)
	{

		for (n = 0; n < f + 1; n++)
		{
			for (m = 0; m < f + 1; m++)
			{
				k = n * m;

				if (k > 9 && k < 100)
					printf(" %d", k);

				else if (k >= 100)
					printf("%d", k);

				else
				{
					if (m != 0)
						printf("  ");

					printf("%d", k);
				}

				if (m != f)
					printf(", ");

				else
					printf("\n");
			}
		}
	}
}

