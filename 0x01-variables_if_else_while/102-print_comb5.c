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

	while (firstDigit <= 99)
	{
		secondDigit = firstDigit;
		while (secondDigit <= 99)
		{
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
			secondDigit++;
		}
		firstDigit++;
	}
	putchar('\n');
	return (0);
}
