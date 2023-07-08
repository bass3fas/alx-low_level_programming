#include <stdio.h>
/**
 * main - prints the of arg of the file
 * @argc: count of arg
 * @argv: vector of arg
 * Return: sucess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
