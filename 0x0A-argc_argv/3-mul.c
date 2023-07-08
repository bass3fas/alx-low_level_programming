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
	int n1, n2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mul = n1 * n2;
	printf("%d\n", mul);
	return (0);
}
