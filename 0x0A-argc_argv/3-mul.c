#include <stdlib.h>
#include <stdio.h>
/**
 * _atoi - string to int
 * @s: string
 * Return: int
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - prints mul of arg of the file
 * @argc: count of arg
 * @argv: vector of arg
 * Return: sucess
 */
int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	mul = n1 * n2;
	printf("%d\n", mul);
	return (0);
}
