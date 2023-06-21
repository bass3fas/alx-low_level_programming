#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a < 0)
		a *= -1;
	if (b < 0)
		b *= -1;
	if (c < 0)
		c *= -1;

	if (a > b && a > b)
		largest = a;

	else if (b > a && b > c)
		largest = b;

	else
		largest = c;

	return (largest);
}
