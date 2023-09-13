#include "main.h"

/**
 * num_length - return length of string
 *
 * @num: operand num
 *
 * Return: number of lenth
*/

int num_length(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num /= 10;
		++length;
	}
	return (length);
}

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: always 0 (success)
*/

int main(void)
{
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;
	int i, initial0s;

	for (i = 1; i <= 98; i++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initial0s = num_length(mx) - 1 - num_length(f1);
		while (f1o > 0 && initial0s > 0)
		{
			printf("%d", 0);
			--initial0s;
		}
		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f2 = sum;
		f1o = f2o;
		f2o = sumo;

		if (i == 98)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
