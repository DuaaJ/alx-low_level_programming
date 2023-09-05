#include "main.h"
#include <stdlib.h>
#include <string.h>



/**
 * *str_concat -  concatenates two strings
 * @s1: firt string
 * @s2: second string
 * Return:  concatenates two strings
 */


char *str_concat(char *s1, char *s2)
{
	char *ptr;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	strcat(s1, s1);
	int size = strlen(s1);

	for (int i = 0; i < size; i++)
	{
		ptr = malloc(i * sizeof(s1) + 1);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (int j = 0; j < size; j++)
		{
			ptr[j] = s1[j];
		}
		return (ptr);
	}
}

