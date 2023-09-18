#include "main.h"

/**
 * print_array - print n elements of an array.
 *
 * @a: arry variable
 * @n: operand integer
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0;i < n; i++)
	{
		printf("%d", a[i]);
			if (i != n - 1)
			{
				printf(", ");
			}
			else
				_putchar('\n');
	}
}
