#include <stdio.h>

/**
 * main - program that multiplies two numbers.
 *
 * @argc: int(size of argv)
 * @argv: list (array of char)
 *
 * Return:  result of the multiplication.
*/

int
main(int argc, char const *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
