#include "main.h"

/**
 * _atoi - convert a string to integer.
 *
 * @s: integer pointer
 *
 * Return: return an integer exist into a string
*/

int _atoi(char *s)
{
	int i, num = 0, f = 1;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == '-')
			f *= -1;
		else if (s[i] >= '0' &&  s[i] <= '9')
			num = num * 10 + (s[i] - '0');
		else if (num > 0)
			break;

	return (num * f);
}
