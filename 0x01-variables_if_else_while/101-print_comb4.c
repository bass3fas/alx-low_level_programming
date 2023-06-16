#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints possible combination of 2 digits
 * Return: Always (0)
 */

int main(void)
{
	int i;
	int j;
	int k;

	i = 48;


	while (i <= 55)
	{
		j = i + 1;

		while (j <= 56)
		{
			k = j + 1;

			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
