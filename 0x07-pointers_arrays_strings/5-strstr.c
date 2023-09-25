#include "main.h"

/**
 * _strspn - gets the number of bytes in the initial segment of (s)
 *	which consist only of bytes from accept.
 *
 * @s: array of character
 * @accept: array of charcter
 *
 * Return: integer num
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0' ; i++)
		for (j = 0; accept[j] != s[i]; j++)
			if (accept[j] == '\0')
				return (i);

	return (i);
}
