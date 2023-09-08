#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program to print alphabet in lowercase.
 *
 * Return: 0 Always (success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
