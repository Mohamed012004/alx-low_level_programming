#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - find the largest prime factor of number
 *
 * @num: operand integer
*/

void largest_prime_factor(long int num)
{
	int prime, largest;

	while (num % 2 == 0)
		num /= 2;
	for (prime = 3; prime <= sqrt(num); prime += 2)
	{
		while (num % prime == 0)
		{
			num /= prime;
			largest = prime;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Describtion: prints the largest prime factor of the number 612852475143.
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}
