#include "main.h"

/**
 * sum - sumition all number are multiple of 3 or 5
 * below 1024
*/

void sum(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
		sum += i;
	printf("%d", sum);
}
