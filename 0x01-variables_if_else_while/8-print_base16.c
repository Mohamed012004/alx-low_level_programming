#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program to print all
 *  the numbers of base 16 in lowercase.
 *
 * Return: 0 Always (success)
*/

int main(void)
{
	int digit = 48;
	int litter = 97;

	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}
	while (litter <= 102)
	{
		putchar(litter);
			litter++;
	}
	putchar('\n');
	return (0);
}
