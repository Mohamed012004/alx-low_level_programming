#include "main.h"

/**
 * _isalpha - checks if input is litter.
 *
 * @c: check input of function
 *
 * Return: return 1. if c is litter
 *         otherwise always 0 (Success)
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
