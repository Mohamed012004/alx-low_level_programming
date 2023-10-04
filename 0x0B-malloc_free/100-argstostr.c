#include "main.h"
#include <stdlib.h>

/**
 * _strlen - get the length osf string.
 *
 * @str: list.
 *
 * Return: length of string.
*/

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: int.
 * @av: list.
 *
 * Return: new string.
*/

char *argstostr(int ac, char **av)
{
	int i, j, nc = 0, c = 0;
	char *s;

	if (!ac || !av)
		return (NULL);
	for (i = 0; i < ac; i++, nc++)
		nc += _strlen(av[i]);
	s = malloc(nc * sizeof(char) + 1);
	if (!s)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, c++)
			s[c] = av[i][j];
		s[c] = '\n';
		c++;
	}
	s[c] = '\0';
	return (s);
}
