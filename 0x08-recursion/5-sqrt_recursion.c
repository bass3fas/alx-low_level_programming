#include "main.h"
/**
 * natural_square - something
 * @n: var
 * @i: counter
 * Return: i
 */
int natural_square(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (natural_square(n, i + 1));
}
/**
 * _sqrt_recursion - something
 * @n: var
 * Return: n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_square(n, 0));
}
