#include <stdio.h>
/**
 * main - whatever
 * Return: success
 */


int main(void)
{
	long int largestfactor, number, i;

	largestfactor = -1;
	number = 612852475143;

	while (number % 2 == 0)
	{
		largestfactor = 2;
		number /= 2;
	}
	for (i = 3; i * i <= number; i += 2)
	{
		while (number % i == 0)
		{
			largestfactor = i;
			number /= i;
		}
	}
	if (number > 2)
		largestfactor = number;
	printf("%ld\n", largestfactor);
	return (0);
}
