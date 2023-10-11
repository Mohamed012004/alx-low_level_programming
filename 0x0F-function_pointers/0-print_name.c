#include "function_pointers.h"

/**
 * print_name - prints name.
 *
 * @name: string.
 * @f: pointer: pointer of char.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
