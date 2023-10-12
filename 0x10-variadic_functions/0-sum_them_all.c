#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: numbers of arguments.
 * @...: integers to sum.
 *
 * Return: sum of all its parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list args;

	if (!n)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, unsigned int);
	va_end(args);

	return (sum);
}
