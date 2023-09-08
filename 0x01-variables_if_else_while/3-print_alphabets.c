#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program to print alphabet in lowercase
 *  and then in uppercase.
 *
 * Return: 0 Always (success)
*/

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	/*prints a - z*/
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	/*prints A - Z*/
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
