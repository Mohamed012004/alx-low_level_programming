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
		int i;

		for (i = 1; i <= n; i++)
		{
			int j = i;

			while (j--)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
