#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatinate Two strings using fun malloc().
 *
 * @s1: first string.
 * @s2: second string.
 * @n: operand integer.
 *
 * Return: pointer to string contains concate s1 to s2.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int n1, n2, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	if (n >= n2)
		n = n2;
	concat = malloc(n1 + n + 1);
	if (concat == NULL)
		return (0);
	for (i = 0; i < n1; i++)
		concat[i] = s1[i];
	for (j = 0; j < n; i++, j++)
		concat[i] = s2[j];
	concat[i] = '\0';
	return (concat);
}
