#include <stdio.h>

/**
 * main - Entry point
 *
 * Describtion: prints the largest prime factor of the number 612852475143.
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	long long n = 612852475143, j = 2, largest_prime = 0;

	while (n != 1)
	{
		if (n % j == 0)
		{
			largest_prime = j;
			n /= j;
		}
		else
			j++;
	}
	printf("%lld\n", largest_prime);
	return (0);
}
