#include <stdio.h>

/**
 * main - program that prints its name.
 *
 * @argc: int(size of argv)
 * @argv: list (array of char)
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
