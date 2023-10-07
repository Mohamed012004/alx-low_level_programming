#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  reallocates a memory block using malloc and free.
 *
 * @ptr: pointer.
 * @old_size: operand int.
 * @new_size: operand int.
 *
 * Return: NULL if new_size = 0 and ptr if NOt.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	else if (!new_size && ptr != NULL)
	{
		return (free(ptr), NULL);
	}
	void *p;
	unsigned int mn, i;

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (ptr == NULL)
		return (p);
	if (old_size <= new_size)
		mn = old_size;
	else
		mn = new_size;
	for (i = 0; i < mn; i++)
		*((char *)p + i) = *((char *)ptr + i);
	free(ptr);
	return (p);
}
