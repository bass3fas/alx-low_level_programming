#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints alphabet reversed
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
