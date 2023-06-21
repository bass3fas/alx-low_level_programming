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

	printf("%lu, %lu", first, second);

	for (i = 3; i <= 50; i++)
	{
		next = first + second;
		printf(", %lu", next);

		first = second;
		second = next;
	}
	printf("\n");

	return (0);
}
