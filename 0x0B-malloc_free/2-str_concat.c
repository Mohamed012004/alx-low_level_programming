#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatinate Two strings using fun malloc().
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to string contains concate s1 to s2.
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int n1, n2, i, j;
	char *concat;

	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	concat = malloc(n1 + n2 + 1);
	if (concat == NULL)
		return (0);
	for (i = 0; i < n1; i++)
		concat[i] = s1[i];
	for (j = 0; j < n2; i++, j++)
		concat[i] = s2[j];
	concat[i] = '\0';
	return (concat);
}
