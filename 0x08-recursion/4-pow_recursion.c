#include  "main.h"

/**
 * _pow_recursion - gets the value of (x) raised to
 *		the power of (y) using recursion.
 *
 * @x: operand integer (base).
 * @y: operand integer (power).
 *
 * Return: integer value (x power of y).
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
