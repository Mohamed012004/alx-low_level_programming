#include "main.h"

/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59.
 **/

void jack_bauer(void)
{
	int i, j, k, l;
	int n = 9;

	for (i = 0; i <= 2; i++)
		for (j = 0; j <= n; j++)
		{
			if (i == 2)
				n = 3;
			for (k = 0; k < 6; k++)
				for (l = 0; l <= 9; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
		}
