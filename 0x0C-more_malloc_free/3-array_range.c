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
	int *arr, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	arr = malloc(sizeof(int) * len);

	if (!arr)
		return (NULL);
	for (; min <= max; min++)
		arr[min] =  min;

	return (arr);
}
