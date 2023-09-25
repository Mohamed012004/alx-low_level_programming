#include "main.h"

/**
 * print_sum1 - prints sum of diagonal of array (a)
 *
 * @sum1: sum of diagonal array of (a).
*/
void print_sum1(int sum1)
{
	int num = sum1;

	if (num < 0)
	{
		_putchar('-');
		num = -sum1;
	}
	if (num / 10 > 0)
		print_sum1(num / 10);
	_putchar(num % 10 + '0');
}

/**
 * print_sum2 - prints sum of reverse_diagonal of array (a).
 *
 * @sum2: sum of reverse_diagonal array of (a).
*/
void print_sum2(int sum2)
{
	int num = sum2;

	if (num < 0)
	{
		_putchar('-');
		num = -sum2;
	}
	if (num / 10 > 0)
		print_sum2(num / 10);
	_putchar(num % 10 + '0');
}

/**
 * print_diagsums - prints the sum of the two diagonals
 *	of a square matrix of integers.
 *
 * @a: two diamentianal array.
 * @size: size of array.
*/

void print_diagsums(int *a, int size)
{
	unsigned int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	print_sum1(sum1);
	_putchar(',');
	_putchar(' ');
	print_sum2(sum2);
	_putchar('\n');
}
