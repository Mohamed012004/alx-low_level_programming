#include "main.h"

/**
 * _atoi - convert a string to integer.
 *
 * @s: integer pointer
 *
 * Return: return an integer exist into a string
*/

int _atoi(char *s)
{
	int i, num = 0, n = 0;
	int f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' &&  s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			++n;
		}
		else if ((s[i] < '0' || s[i] > '9') && n > 0)
			break;

		if (n == 1 && i != 0 && s[i - 1] == '-')
			++f;
	}
	if (f)
		printf("-");
	if (!n)
		return (0);
	return (num);
}
