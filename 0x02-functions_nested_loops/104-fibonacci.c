#include <stdio.h>
/**
 * main - print fibonacci
 * Return: success
 */


int main(void)
{
	long int count;
	long int first, second, next;

	first = 1;
	second = 2;

	printf("%ld, %ld, ", first, second);


	for (count = 3; count <= 98; count++)
	{
		next = first + second;
		printf("%ld, ", next);

		first = second;
		second = next;
	}
	printf("\n");

	return (0);
}
