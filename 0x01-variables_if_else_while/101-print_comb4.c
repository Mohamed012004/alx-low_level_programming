#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program to print all
 *   possible different combinations of two digits.
 *
 * Return: 0 Always (success)
*/
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48 ; i <= 57 ; i++)
		for (j = 48 ; j <= 57 ; j++)
			for (k = 48 ; k <= 57 ; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i < 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	putchar('\n');
	return (0);
}
