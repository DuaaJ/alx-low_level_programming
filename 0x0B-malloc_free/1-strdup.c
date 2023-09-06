#include "main.h"
#include <stdlib.h>

/**
 * *_strdup -  contains a copy of the string
 * @str:the array
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	for (; str[i] != '\0'; i++)
		;
	ptr = malloc(i * sizeof(*str) + 1);

	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (; j < i; j++)
			ptr[j] = str[j]
	}
	return (ptr);
}
