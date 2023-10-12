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
	int i, num = 0;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (!separator && i > n - 1)
			printf("%s", "");
		else if (separator && i < n - 1)
			printf("%s", separator);
		else
			printf("\n");
	}
}
