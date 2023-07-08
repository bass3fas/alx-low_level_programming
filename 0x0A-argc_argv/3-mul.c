#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints mul of arg of the file
 * @argc: count of arg
 * @argv: vector of arg
 * Return: sucess
 */
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
