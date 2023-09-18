#include "main.h"

/**
 * _puts - print input string
 *
 * @str: char arry (string)
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		-putchar(str[i]);
	-putchar('\n');
}
