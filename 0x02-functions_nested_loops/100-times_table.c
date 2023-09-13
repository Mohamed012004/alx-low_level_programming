#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: input integer >= 0 && <= 15
*/

void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				if (i * j <= 9)
					_putchar(' ');
				if (i * j <= 99)
					_putchar(' ');

				if (i * j > 99)
				{
					_putchar((i * j) / 100 + 48);
					_putchar(((i * j) / 10) % 10 + 48);
				}
				else if (i * j > 9 && i * j <= 99)
					_putchar((i * j) / 10 + 48);
				_putchar((i * j) % 10 + 48);
			}
			_putchar('\n');
		}
	}
}
