#include "main.h"
#include <stdlib.h>

/**
 * wdcnt - get the num of words in the string.
 *
 * @str: list.
 *
 * Return: num of words in string.
*/

int wdcnt(char *str)
{
	int i, n = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				++n;
		}
		else if (i == 0)
			++n;
	}
	++n;
	return (n);
}

/**
 * strtow - splits a string into words.
 *
 * @str: list.
 *
 * Return: 2d array of string.
*/

char **strtow(char *str)
{
	int i = 0, j, k, l, n = 0, c = 0;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wdcnt(str);
	if (n == 1)
		return (NULL);
	s = (char **)malloc(n * sizeof(char *));
	if (s == NULL)
		return (NULL);
	s[n - 1] = NULL;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			s[c] = (char *) malloc(j * sizeof(char));
			j--;
			if (s[c] == NULL)
			{
				for (k = 0; k < c; k++)
					free(s[k]);
				free(s[n - 1]);
				free(s);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				s[c][l] = str[i + l];
			s[c][l] = '\0';
			++c;
			i += j;
		}
		else
			i++;
	}
	return (s);
}
