#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase using putchar prototype
 *
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	putchar('\n');
}
