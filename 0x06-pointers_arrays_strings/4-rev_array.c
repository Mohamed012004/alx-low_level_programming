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
		s[i] = s[n - i - 1];
		s[n - i - 1] =  s[i];
	}
}
