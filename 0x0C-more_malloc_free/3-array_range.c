#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: operand integer.
 * @max: operand integer.
 *
 * Return: array of integer.
*/

int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);
	int *arr = malloc(sizeof(int) * (max - min + 1));

	if (!arr)
		return (NULL);
	for (; min <= max; min++)
		arr[min] =  min;

	return (arr);
}
