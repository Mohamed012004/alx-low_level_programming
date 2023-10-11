#include "function_pointers.h"

/**
 * int_index - search for an integer.
 *
 * @array: integer array.
 * @size: integer.
 * @cmp: pointer to function.
 *
 * Return: index of num.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
