#include "main.h"

/**
 * print_sign - print sign of input number
 *
 * @n: checks input of function
 *
 * Return: return 1. if n is positive
 *         return -1. if n is negative
 *         otherwise always 0 (success)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
