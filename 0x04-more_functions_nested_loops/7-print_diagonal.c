#include "main.h"

/**
 * print_diagonal - draws a diagomal line on the terminal.
 *
 * @n: operad integer
 *
 * Return: void
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
