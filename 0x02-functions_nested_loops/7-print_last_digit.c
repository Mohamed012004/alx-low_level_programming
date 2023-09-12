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
	_putchar(n % 10 + '0');
	return (0);
}
