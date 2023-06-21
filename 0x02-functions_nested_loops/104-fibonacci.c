#include <stdio.h>
/**
 * main - print fibonacci
 * Return: success
 */


typedef struct
{
	unsigned long high;
	unsigned long low;
}DUL;

void print_dul(DUL num)
{
	if (num.high != 0)
		printf("%lu%016%lu", num.high, num.low);
	else
		printf("%lu", num.low);
}

DUL add_dul(DUL a, DUL b)
{
	DUL result;

	result.low = a.low + b.low;
	result.high = a.high + b.high + (result.low < a.low);

	return (result);
}


int main(void)
{
	unsigned int count;
	DUL first, second, next;

	first = { 0, 1 };
	second = { 0, 2 };


	print_dul(first);
	printf(", ");
	print_dul(second);


	for (count = 3; count <= 98; count++)
	{
		next = add_dul(first, second);
		print_dul(next);
		printf(", ");

		first = second;
		second = next;
	}
	printf("\n");

	return (0);
}
