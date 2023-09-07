#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *fill - fill with char
 * @str: string
 * @c: char
 * @nu:number
 * Return:string
 */

char *fill(char *str, char c, unsigned int nu)
{
	char *ptr = str;

	while (nu--)
		*str++ = c;

	return (ptr);
}

/**
 * *_calloc - llocates memory for an array
 * @nmemb: array
 * @size: size
 * Return: something
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(sizeof(int) * nmemb);

	if (ptr == 0)
		return (NULL);

	fill(ptr, 0, sizeof(int) * nmemb);

	return (ptr);
}
