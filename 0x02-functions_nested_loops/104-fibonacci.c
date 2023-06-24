#include <stdio.h>
/**
 * main - print fibonacci
 * Return: success
 */


int main(void)
{
	int count;
	unsigned long int first, second, firstl, secondl;
	unsigned long int next, nextl, nextls, largest;


	firstl = 0;
	secondl = 0;
	first = 1;
	second = 2;
	largest = 10000000000;

	printf("%lu, %lu, ", first, second);


	for (count = 3; count <= 98; count++)
	{
		if (first + second > largest || firstl > 0 || secondl > 0)
		{
			nextl = (firstl + secondl) / largest;
			next = (first + second) % largest;
			nextls = firstl + secondl + nextl;
			firstl = secondl;
			secondl = nextls;
			first = second;
			second = next;
			printf("%lu, ", nextl, next);
		}

		else
		{

			next = first + second;
			first = second;
			second = next;
			printf("%lu", next);
		}

		if (count < 98)
			printf(", ");
	}
	printf("\n");

	return (0);
}
