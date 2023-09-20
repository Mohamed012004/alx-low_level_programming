#include "main.h"

/**
 * reverse_array - compare between two string.
 *
 * @a: variable array
 * @n: length of array
 *
 * Return: voide
*/

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0 ; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] =  a[i];
	}
}
