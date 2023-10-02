#include "main.h"

/**
 * _strcat - concatination two string.
 *
 * @dest: first string
 * @src: second string
 *
 * Return: dest string after concatination
*/

char *_strcat(char *dest, char *src)
{
	int c, i;

	c = 0;
	while (dest[c])
		c++;
	for (i = 0; src[i] != '\0'; i++)
		dest[c + i] = src[i];
	return (dest);
}
