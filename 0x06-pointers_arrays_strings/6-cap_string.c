#include "main.h"

/**
 * islower - check character lowercase
 *
 * @c: character of string
 *
 * Return: 1 (is lower) , 0 (success)
*/

int islower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

/**
 * delimiter - check if saperator is exist
 *
 * @c: character of string
 *
 * Return: 1 (is saperator) , 0 (Success)
*/

int delimiter(char c)
{
	int i;
	char a[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 13; i++)
		if (c == a[i])
			return (1);
	return (0);
}

/**
 * cap_string - Capitalize all Words of string.
 *
 * @s: string
 *
 * Return: a string (s)
*/

char *cap_string(char *s)
{
	int i, f = 1;

	for (i = 0; s[i] != '\0'; i++)
		if (delimiter(s[i])
				f = 1;
		else if (islower(s[i] && f)
		{
			s[i + 1] -= 32;
			f = 0;
		}
		else
			f = 0;

	return (s);
}
