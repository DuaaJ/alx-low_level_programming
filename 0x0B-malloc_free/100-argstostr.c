#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - the function didnot work
 * @s:the string
 * Return:integer lenghth
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}


/**
 * *argstostr - concatenates all the arguments
 * @ac: an integer
 * @av: the arguments
 * Return:pointer to a new string, or NULL
 */

int _strlen(char *s);

char *argstostr(int ac, char **av)
{
	int i, j, i1 = 0, j1;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, i1++)
		i1 += _strlen(av[i]);

	ptr = malloc(sizeof(char) * i1 + 1);

	if (ptr == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, j1++)
			ptr[j1] = av[i][j];

		ptr[j1] = '\n';
		j1++;
	}
	ptr[j1] = '\0';
	return (ptr);
}
