#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 *
 * @separator: string to be printed between numbers.
 * @n: numbers of arguments.
 * @...: integers to sum.
 *
 * Return: void.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n, num = 0;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (i--)
	{
		num = va_arg(args, int);
		printf("%d%s", num, i ? (separator ? separator : "") : "\n");
	}
	va_end(args);
}
