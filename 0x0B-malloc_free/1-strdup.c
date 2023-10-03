#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: array of char.
 *
 * Return: returns a pointer to the duplicated string. It returns
 * NULL if insufficient memory was available.
*/

char *_strdup(char *str)
{
	int i, n = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	for (; str[n] != '\0'; n++)
		;
	s = malloc(n * sizeof(*str) + 1);
	if (s == 0)
		return (NULL);
	for (i = 0; i < n; i++)
		s[i] = str[i];
	return (s);
}
