#include "main.h"

/**
 * cap_string - Capitalize all Words of string.
 *
 * @s: string
 *
 * Return: a string (s)
*/

char *cap_string(char *s)
{
	int i;

	i = 0;
	if (s[0] >= 97 && s[0] >= 122)
		s[0] -= 32;
	for (i = 1; s[i] != '\0'; i++)
		if ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i + 1] >= 97 && s[i + 1] <= 122)
			s[i + 1] -= 32;
	return (s);
}
