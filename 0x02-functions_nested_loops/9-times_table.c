#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
*/

void times_table(void)
{
	int t = 9;
	int i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			if (i * j > 9)
				_putchar((i * j) / 10 + 48);
			else
				_putchar(' ');
			_putchar((i * j) % 10 + 48);
		}
			_putchar('\n');
	}
}
