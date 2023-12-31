#include "main.h"

/**
 * is_prime - check if the number is prime or not.
 *
 * @n: given number
 * @num: number of diviser for (n).
 *
 * Return: integer number.
*/

int is_prime(int n, int num)
{
	if (num >= n / 2 && n > 1)
		return (1);
	else if (n % num == 0 || n < 2)
		return (0);
	else
		return (is_prime(n, num + 1));
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
	return (is_prime(n, 2));
}
