#include "main.h"

/**
 * main - Entry poin
 *
 * Description: sumition all number are multiple of 3 or 5
 * below 1024 (excluded)
 * Return: always 0 (success)
*/

int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	printf("%d\n", sum);
	return (0);
}
