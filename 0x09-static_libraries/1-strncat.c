#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * _strncat -  concatenates two strings.
 *
 * @dest: first array
 * @src: second array
 * @n: number of index
 *
 * Return:  pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
