#include "main.h"

/**
 * print_numbers - prints digits from 0 to 9
 *		Except 2 and 4.
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		if (i != 2 && i != 4)
			_putchar(i + '0');
	_putchar('\n');
}
