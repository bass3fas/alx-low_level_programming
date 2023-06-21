#include <stdio.h>
/**
 * main - print fibonacci
 * Return: success
 */


int main(void)
{
	unsigned long i, next, first, second;

	first = 1;
	second = 2;
	next = 0;

	printf("%lu, %lu", first, second);

	for (i = 3; next <= 4000000; i++)
	{
		next = first + second;
		if (next % 2 == 0)
			printf(", %lu", next);

		first = second;
		second = next;
	}
	printf("\n");

	return (0);
}
