#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - somehting
 * @argc: var
 * @argv: arr
 * Return: success or error
 */
int main(int argc, char *argv[])
{
	int num, i, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num > 0; i++)
	{
		while (num >= coins[i])
		{
			num = num - coins[i];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
