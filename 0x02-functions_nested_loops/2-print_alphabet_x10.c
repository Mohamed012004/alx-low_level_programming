#include "main.h"

/**
 * print_alphabet_x10 - to print alphabet in lowercase
 * 10 times using print_alphabet prototype
 *
*/
void print_alphabet_x10(void)
{
	int count = 10;

	while (count--)
	{
		int i;

		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
