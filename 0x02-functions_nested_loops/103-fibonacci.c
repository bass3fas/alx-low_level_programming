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
	sum = second;

	for (i = 0; next <= 4000000; i++)
	{
		if (next % 2 == 0)
			sum = sum + next;
		next = first + second;
		first = second;
		second = next;
	}
	printf("%lu\n", sum);

	return (0);
}
