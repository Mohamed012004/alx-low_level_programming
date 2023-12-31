#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *and initializes it with a specific char.
 *
 * @size: int
 * @c: single char.
 *
 * Return: pointer to the array, or NULL if it fails.
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr =  malloc(size);
	if (ptr == 0 || size == 0)
		return (0);
	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	return (ptr);
}
