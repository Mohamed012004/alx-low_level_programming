#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
*/

void times_table(void)
{
	int t = 9;
	int i, j;

	while (t--)
	{
		for (i = 0; i < 10; i++)
		{
			int logic = 0;

			_putchar(48);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			for (j = 0; j < 9; j++)
			{
				logic += i;
				_putchar(logic + 48);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
