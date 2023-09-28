#include  "main.h"

/**
 * _strlen_recursion - gets length of a string using recursion.
 *
 * @s: array os char.
 *
 * Return: length of a string (s).
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(*s + 1));
}
