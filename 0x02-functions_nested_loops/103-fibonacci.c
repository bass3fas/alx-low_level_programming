#include <stdio.h>
/**
 * main - print fibonacci
 * Return: success
 */


int main(void)
{
	unsigned long i, sum, next, first, second;

	first = 1;
	second = 2;
	next = 0;
	sum = 0;

	printf("%lu, %lu", first, second);

	for (i = 3; next <= 4000000; i++)
	{
		next = first + second;
		if (next % 2 == 0)
			sum = sum + next;

		first = second;
		second = next;
	}
	printf("%lu\n", sum);

	return (0);
}
