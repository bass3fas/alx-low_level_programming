#include "main.h"
#include <stdio.h>
/**
 * natural - prints divisible by 3 and 5
 */



void natural(void)
{
	int i, j;

	j = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j = j + i;
	}

	printf("%d\n", j);

}
