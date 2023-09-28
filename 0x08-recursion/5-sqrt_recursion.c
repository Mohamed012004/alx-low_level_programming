#include "main.h"

/**
 * square - retur square for func _sqrt_recursion.
 *
 * @n: operan integer.
 * @i: operand integer.
 *
 * Return: square (n)
*/

int square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (square(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - retur square of (n).
 *
 * @n: operan integer.
 *
 * Return: square (n)
*/

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

