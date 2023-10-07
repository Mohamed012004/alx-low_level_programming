#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with initial value.
 *
 * @s: pointer string.
 * @b: single char.
 * @n: operand inreger.
 *
 * Return: string.
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

/**
 * _calloc -  allocates memory for an array, using malloc.
 *
 * @nmemb: int (num of elements of array).
 * @size: int (size of array).
 *
 * Return: Returns a pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	(void)size;

	if (!nmemb || !size)
		return (0);
	m = malloc(sizeof(int) * nmemb);
	if (m == NULL)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
