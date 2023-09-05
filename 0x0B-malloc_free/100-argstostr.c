#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - concatenates all the arguments
 * @ac: an integer
 * @av: the arguments
 * Return:pointer to a new string, or NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, i1, j1;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, i1 = 0; i < ac; i++, i1++)
		i1 += strlen(av[i]);

	ptr = malloc(i1 * sizeof(char) + 1);

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
