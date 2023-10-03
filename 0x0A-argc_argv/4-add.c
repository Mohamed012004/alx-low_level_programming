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
	int sum;

	sum = 0;
	for (i = 0; i < argc; i++)
		if (argv[i][0] >= '0' && argv[i][0] <= '9')
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	printf("%d\n", sum);
	return (0);
}
