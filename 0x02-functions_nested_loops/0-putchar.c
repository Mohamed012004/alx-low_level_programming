#include"main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char arr[] = "_putchar";
	int i;

	for (i = 0; i < 8; ++i)
		_putchar(arr[i]);
	putchar('\n');
	return (0);
}
