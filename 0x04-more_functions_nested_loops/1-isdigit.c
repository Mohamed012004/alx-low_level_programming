#include "main.h"

/**
 * _isupper - chack if the input is a digit from 0 to 9
 *
 * @c: integer input
 *
 * Return: always 0 (Success)
*/

int _isupper(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
