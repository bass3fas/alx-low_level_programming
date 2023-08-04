#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - something
 * @argc: var
 * @argv: var
 * Return: success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, k;

	if (argc == 0)
		sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (argv[i][k] < '0' || argv[i][k] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
