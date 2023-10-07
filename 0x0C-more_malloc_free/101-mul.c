#include <stdio.h>
#include <stdlib.h>

/**
 * _puts - prints a string.following new line.
 *
 * @str: pointer to string.
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		++i;
	}
	_putchar('\n');
}

/**
 * _atoi - convert string to integer.
 *
 * @str: char of string.
 *
 * Return: intege.
*/

int _atoi(char *str)
{
	int sign = 1, f = 1;
	unsigned long int ans = 0, first_num, i;

	for (first_num = 0; !(str[first_num] >= 48 && str[first_num] <= 57)
	; first_num++)
		if (str[first_num] == '-')
			sign *= -1;
	for (i = first_num; str[i]; i++)
		if (str[i] >= 48 && str[i] <= 57)
		{
			ans *= 10;
			ans += (str[i] - 48);
		}
		else
		{
			_puts("Error");
			exit(98);
		}
		return (sign * ans);
}

/**
 * print_int - prints an integer.
 *
 * @n: int.
*/

void print_int(unsigned long int n)
{
	unsigned long int divisor = 1, i, ans;

	for (i = 0; n / divisor > 9; i++, divisor *=  10)
		;
	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		ans = n / divisor;
		_putchar('0' + ans);
	}
}

/**
 * main - program prints multiplication two integers.
 *
 * @argc: int.
 * @argv: list.
 *
 * Return: 0.
*/

int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
