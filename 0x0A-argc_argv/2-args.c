#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 *
 * @argc: int(size of argv)
 * @argv: list (array of char)
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
