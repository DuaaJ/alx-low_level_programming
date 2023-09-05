#include "main.h"
#include <stdlib.h>

/**
 * count - count words in the string
 * @s:string
 * Return:number of words
 */

int count(char *s)
{
	int i, j = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				j++;
		}
		else if (i == 0)
			j++;
	}
	j++;
	return (j);
}

/**
 * **strtow - splits a string into words
 * @str: the string
 * Return: array
 */


char **strtow(char *str)
{
	int i, j, ik, il, num = 0, wor = 0;
	char **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	num = count(str);
	if (num == 1)
		return (NULL);
	ptr = (char **)malloc(num * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	ptr[num - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			ptr[wor] = (char *)malloc(j * sizeof(char));
			j--;
			if (ptr[wor] == NULL)
			{
				for (ik = 0; ik < wor; ik++)
					free(ptr[ik]);
				free(ptr[num - 1]);
				free(ptr);
				return (NULL);
			}
			for (il = 0; il < j; il++)
				ptr[wor][il] = str[i + il];
			ptr[wor][il] = '\0';
			wor++;
			i += j;
		}
		else
			i++;
	}
	return (ptr);
}
