#include "main.h"

/**
 * rot13 - encode a string using rot13.
 *
 * @s: string
 *
 * Return: a string (s)
*/

char *rot13(char *s)
{
	int i;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQPSTUVWXYZABCDEFGHIJKLM";

	while (*s)
	{
		for (i = 0; i < 52; i++)
			if (*s == rot13[i])
			{
				s[i] = ROT13[i];
				break;
			}
		s++;
	}
	return (s);
}
