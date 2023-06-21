#include <stdlib.h>
#include <stdio.h>
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
	int largest, A, B, C;

	A = abs(a);
	B = abs(b);
	C = abs(c);

	if (A > B && A > C)
		largest = A;

	else if (B > A && B > C)
		largest = B;

	else
		largest = C;

	return (largest);
}
