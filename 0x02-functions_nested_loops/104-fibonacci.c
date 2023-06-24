#include <stdio.h>
/**
 * main - does something
 * Return: succ
 */



int main(void)
{
	unsigned long int count, largest;
	unsigned long int fr1, fr2, bk1, bk2, hold1, hold2, hold3;

	fr1 = 0;
	bk1 = 1;
	fr2 = 0;
	bk2 = 2;
	largest = 10000000000;

	printf("%lu, %lu, ", bk1, bk2);

	for (count = 3; count <= 98; count++)
	{
		if (count > 91 || fr1 > 0 || fr2 > 0)
		{
			hold1 = (bk1 + bk2) / largest;
			hold2 = (bk1 + bk2) % largest;
			hold3 = fr1 + fr2 + hold1;
			fr1 = fr2;
			bk1 = bk2;
			fr2 = hold3;
			bk2 = hold2;
			printf("%lu%lu", fr2, bk2);
		}
		else
		{
			hold1 = bk1 + bk2;
			bk1 = bk2;
			bk2 = hold1;
			printf("%lu", bk2);
		}
		if (count != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
