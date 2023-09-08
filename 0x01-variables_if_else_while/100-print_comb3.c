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

	for (i = 48 ; i <= 57 ; i++)
		for (j = 48 ; j <= 57 ; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i < 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);
}
