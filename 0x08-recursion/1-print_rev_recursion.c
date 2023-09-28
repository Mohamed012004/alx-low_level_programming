#include  "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion.
 *
 * @s: array os char
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_puts_rev_recursion(s + 1);
		_putchar(*s);
	}
}
