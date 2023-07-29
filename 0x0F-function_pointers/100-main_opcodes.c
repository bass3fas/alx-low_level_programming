#include <stdio.h>
#include <stdlib.h>
/**
 * main - something
 * @argc: var
 * @argv: pointer
 * Return: success
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	arr = (char *)main;
	bytes = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx", arr[i]);
	}
	return (0);
}
