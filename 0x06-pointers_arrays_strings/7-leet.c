#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @s: string
 *
 * Return: a string (s)
*/

char *leet(char *s)
{
	int i, j;
	char a[] = "aeotl";
	char b[] = "AEOTL";
	char en[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
			if (s[i] == a[j] || s[i] == b[j])
			{
				s[i] = en[j];
				break;
			}
	}

	return (s);
}
