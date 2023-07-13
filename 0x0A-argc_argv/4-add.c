#include <stdlib.h>
#include <stdio.h>
/**
 * _isdigit - check if digit
 * @c: pointer to a string
 * Return: success or falt
 */
int _isdigit(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}
/**
 * main - prints mul of arg of the file
 * @argc: count of arg
 * @argv: vector of arg
 * Return: sucess
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!_isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}