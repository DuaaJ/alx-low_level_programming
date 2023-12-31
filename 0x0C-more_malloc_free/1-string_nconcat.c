#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1:first string
 * @s2:second string
 * @n:number to second string
 * Return:NULL , the pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j, sizes1, sizes2;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	sizes1 = strlen(s1);
	sizes2 = strlen(s2);
	int size = sizes1 + n;

	ptr = malloc(size * sizeof(char) + 1);

	if (ptr == 0)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		if (i < sizes1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - n];
	}

	ptr[i] = '\0';
	return (ptr);
}
