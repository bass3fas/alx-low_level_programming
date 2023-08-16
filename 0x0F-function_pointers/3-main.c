#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - funct
 * @argc: arg
 * @argv: arg
 * Return: sucess
 */
int main(int argc, char *argv[])
{
	int a, b, r;
	char o;
	int (*func)(int, int);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if (b == 0 && (o == '/' || 0 == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	r = func(a, b);
	printf("%d\n", r);
	return (0);
}
