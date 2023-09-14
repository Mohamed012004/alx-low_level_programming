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
	if (n > 0)
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
