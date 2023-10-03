#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: int(size of argv)
 * @argv: list (array of char)
 *
 * Return: 0.
*/
int main(int argc, char *argv[])
{
	unsigned int num = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
			num += atoi(argv[argc]);
		}
	}
	if(num)
		printf("%d\n", num);
	else
		printf("0\n");
	return (0);
}
