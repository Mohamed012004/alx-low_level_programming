#include "main.h"

/**
 * _strncat - concatination two string.
 *
 * @dest: first string
 * @src: second string
 * @n: operand integer
 *
 * Return: dest string after concatination
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}
