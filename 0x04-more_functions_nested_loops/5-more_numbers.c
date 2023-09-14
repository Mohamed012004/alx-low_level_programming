#include "main.h"

/**
 * more_numbers - prints digits from 0 to 14 around 10 times.
*/

void more_numbers(void)
{
	int i, t = 10;

	while (t--)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
