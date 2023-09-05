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

	for (int i = 0; str[i] != '\0'; i++)
		ptr = malloc(i * sizeof(*str) + 1);

	if (str == NULL || ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (int j = 0; str[j] != '\0'; j++)
			ptr[j] = str[j];
	return (ptr);
	}
}
