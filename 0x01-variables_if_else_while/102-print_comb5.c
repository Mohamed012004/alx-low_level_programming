#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program to print all
 *   possible combinations of two-digit numbers.
 *
 * Return: 0 Always (success)
*/
int main(void)
{
	int first_digit  = 0;
	int second_digit = 0;

	for (first_digit ; first_digit <= 99 ; first_digit++)
	{
		second_digit = first_digit;
		for (second_digit ; second_digit <= 99 ; second_digit++)
			if (second_digit != first_digit)
			{
				putchar((first_digit / 10) + 48);
				putchar((first_digit % 10) + 48);
				putchar(' ');
				putchar((second_digit / 10) + 48);
				putchar((second_digit % 10) + 48);
				if (first_digit != 98 || second_digit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
