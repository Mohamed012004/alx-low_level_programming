#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program to print all
 *  possible combinations of single-digit numbers.
 *
 * Return: 0 Always (success)
*/

int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		if (digit != 57)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}

	return (0);
}
