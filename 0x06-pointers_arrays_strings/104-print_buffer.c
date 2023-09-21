#include "main.h"

/**
 * isPrintableASCII - check if it's valid to print
 *
 * @n: operand integer
 *
 * Return 1 (true) , 0 (false)
*/

int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - print position of the first byte of the line
 *	in hexadecimal (8 chars), starting with 0.
 *
 * @b: string
 * @start: first of hexa
 * @end: end of hexa
 *
 * Return: void
*/

void printHexes(char *b, int start, int end)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
	}
}

/**
 * printASCII - prints ascii values for string b.
 *
 * @b: string
 * @start: first of hexa
 * @end: end of hexa
*/

void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + start + i);
		if (!isPrintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - print a buffer
 *
 * @b: pointer (point to buffer)
 * @size: size of b
*/

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
