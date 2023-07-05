#include "main.h"
/**
 * natural_square - something
 * @n: var
 * @i: counter
 * Return: i
 */
int natural_square(int n, int i)
{
	if (i * i >= n)
		return (i);
	return (natural_square(n, i + 1));
}
/**
 * iterate - something
 * @n: var
 * @i: counter
 * Return: 1 or 0
 */
int iterate(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0  && i > 1)
		return (0);
	return (iterate(n, i - 1));
}

/**
 * is_prime_number - something
 * @n: var
 * Return: n
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (iterate(n, natural_square(n, 0)));
}
