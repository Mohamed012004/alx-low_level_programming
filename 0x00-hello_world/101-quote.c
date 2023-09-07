#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print a qoute using Write function
 *    ssize_t write(int fd. const void *buf. size_t count);
 *
 * Return: 1 (error).
*/


int main(void)
{
	char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, arr, 59);
	return (1);
}
