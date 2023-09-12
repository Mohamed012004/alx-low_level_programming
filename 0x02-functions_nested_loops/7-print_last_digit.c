#include "main.h"

/**
 * print_last_digit - print last digit of input number
 *
 * @n: take integer input number of function
 *
 * Return: return 0 (Success);
*/

int print_last_digit(int n)
{
	int l = 0;

	if (n < 0)
		l = -1 * (n % 10);
	else
		l = n % 10;
	_putchar(l + '0');
	return (n % 10);
}
