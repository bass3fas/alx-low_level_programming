#include <stdio.h>
#include "main.h"
/**
 * main - some
 * @argc: var
 * @argv: arr
 * Return: success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
