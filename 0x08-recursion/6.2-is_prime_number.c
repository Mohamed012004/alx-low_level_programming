#include "main.h"

/**
 * is_prime - check if the number is prime or not.
 *
 * @n: given number
 * @num: number of diviser for (n).
 * @count: operand integer
 *
 * Return: integer number.
*/

int is_prime(int n, int num, int count)
{
	if (n < 2)
		return (0);

	if (count > n / 2)
	{
		if (num > 1)
			return (0);
		else
			return (1);
	}

	if (n % count == 0)
		++num;
	is_prime(n, num, count + 1);
}

/**
 * is_prime_number - check if the number is prime or not.
 *
 * @n: given number.
*
 * Return: integer number.
*/

int is_prime_number(int n)
{
	return (is_prime(n, 0, 1));
}
