#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 *	a parameter on each element of an array.
 *
 * @array: integer array.
 * @size: integer.
 * @action: pointer to function.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size;

	if (array && size && action)
		while (array < end)
			action(*array++);
}
