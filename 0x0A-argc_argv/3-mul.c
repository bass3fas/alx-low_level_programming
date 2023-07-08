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
	int mul;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
