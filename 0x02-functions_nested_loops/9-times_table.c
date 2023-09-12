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
				if (logic > 9)
				{
					_putchar(logic / 10 + 48);
					_putchar(logic % 10 + 48);
				}
				else
				_putchar(logic + 48);
				if (j < 8)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
