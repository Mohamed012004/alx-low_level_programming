#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 *
 * @argc: int(size of argv)
 * @argv: list (array of char)
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int sum = 0, i;
	char *c;

	for (i = 1; i < argc; i++)
	{
		for (c = argv[i]; *c; c++)
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (0);
			}
			else
				sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
