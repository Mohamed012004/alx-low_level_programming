#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src to the buffer pointed to by dest
 *
 * @src: first pointer
 * @dest: second pointer
 *
 * return string point to by dest
*/

char *_strcpy(char *dest, char *src)
{
	int i, l;
	for (l = 0; s[l]; l++);
	++l;
	for (i = 0 ; i < l; ++i)
		dest[i] = src[i];
	return (dest);
}
