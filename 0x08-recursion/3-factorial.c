#include  "main.h"

/**
 * factorial - gets factorial of given number using recursion.
 *
 * @n: operand integer.
 *
 * Return: factorial (n).
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
