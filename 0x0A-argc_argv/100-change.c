#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints min coins of cents of the file
 * @argc: count of arg
 * @argv: vector of arg
 * Return: sucess
 */
int main(int argc, char *argv[])
{
	int num, j, result;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;
	if (num <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5; j++)
	{
		while (num >= coins[j])
		{
			result++;
			num = num - coins[j];
		}
	}
	printf("%d\n", result);
	return (0);
}
