#include <stdio.h>
/**
 * main - prints divisible by 3 and 5
 * Return: success
 */


int main(void)
{
	int i, j;

	j = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j = j + i;
	}

	printf("%d\n", j);

	return (0);

}
