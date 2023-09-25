#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string (s) of
 *	any of the bytes in the string accept.
 *
 * @s: array of character
 * @accept: array of charcter
 *
 * Return: integer num
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0' ; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[j] == s[i])
				return (s + i);

	return (NULL);
}
