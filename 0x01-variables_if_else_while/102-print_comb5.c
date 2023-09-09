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
	int firstDigit  = 0;
	int secondDigit;

	for (firstDigit ; firstDigit <= 99 ; firstDigit++)
	{
		secondDigit = firstDigit;
		for (secondDigit ; secondDigit <= 99 ; secondDigit++)
			if (secondDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((secondDigit / 10) + 48);
				putchar((secondDigit % 10) + 48);
				if (firstDigit != 98 || secondDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
