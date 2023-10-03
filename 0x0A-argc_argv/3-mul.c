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
	if (argc < 3)
	{
		puts("Error");
		return (1);
	}
	printf("lld\n", argv[0] * argv[1]);
	return (0);
}
