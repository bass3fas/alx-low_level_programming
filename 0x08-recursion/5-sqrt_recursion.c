#include "main.h"
/**
 * _sqrt - something
 * @n: num
 * @i: count
 * Return: int
 */
int _sqrt(int n, int i)
{
	if (i <= 0)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt(n, i - 1));
}
/**
 * _sqrt_recursion - something
 * @n: num
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0 )
		return (-1);
	return (_sqrt(n, n - 1));
}
