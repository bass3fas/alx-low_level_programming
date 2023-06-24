#include <stdio.h>
/**
 * main - print fibonacci
 * Return: success
 */


int main(void)
{
	int count;
	unsigned long int first, second, next;
	/*unsigned long int nextl, nextls, largest, first1, second1;


	firstl = 0;
	secondl = 0;
	largest = ;*/
	first = 1;
	second = 2;

	printf("%lu, %lu, ", first, second);


	for (count = 3; count <= 98; count++)
	{
		/*if (first + second > largest || firstl > 0 || secondl > 0)
		{
			nextl = (firstl + secondl) / largest;
			next = (first + second) % largest;
			nextls = firstl + secondl + nextl;
			firstl = secondl;
			secondl = nextls;
			first = second;
			second = next;
			printf("%lu%lu, ", nextl, next);
		}

		else
		{*/

			next = first + second;
			first = second;
			second = next;
			printf("%lu", next);
			/*	}*/

		if (count != 98)
			printf(", ");
	}
	printf("\n");

	return (0);
}
