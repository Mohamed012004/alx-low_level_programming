#include "main.h"

/**
 * puts_half - print second half of input string.
 *
 * @str: char arry (string)
*/

void puts_half(char *str)
{
	int i, len = 0;

	while (str[len])
		++len;
	for (i = len / 2 - 1; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
