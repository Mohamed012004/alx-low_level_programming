#include "main.h"

/**
 * main - Entry poin
 *
 * Description: prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: always 0 (success)
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum = 0;
	int i;

	for (i = 0; i < 50; i++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
