#include "main.h"

/**
 * _strcmp - compare between two string.
 *
 * @s1: fist string
 * @s2: second string
 *
 * Return: 1 (the first is greater), -1 (the second is greater)
 *		, 0 (equal)
*/

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
