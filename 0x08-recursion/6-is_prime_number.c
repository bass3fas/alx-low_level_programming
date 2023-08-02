#include "main.h"
/**
 * _prime - some
 * @n: num
 * @i: count
 * Return: int
 */
int _prime(int n, int i)
{
	if (i <= 1)
		return (1);
	if (n % i != 0)
		return (_prime(n, i - 1));
	else
		return (0);
}
/**
 * is_prime_number - something
 * @n: num
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}
