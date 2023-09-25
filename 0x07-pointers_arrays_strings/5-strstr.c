#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring (needle)
 *	in the string haystack. The terminating null bytes (\0)
 *	are not compared.
 *
 * @haystack: array of character.
 * @needle: array of charcter.
 *
 * Return: a pointer to the beginning of the located substring,
 *	or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int n, i, k;

	for (n = 0; needle[n] != '\0' ; n++)
		;
	for (i = 0 ; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[k])
			++k;
		else
			k = 0;

		if (k == n)
			return (haystack + (i - n + 1));
	}
	return (NULL);
}
