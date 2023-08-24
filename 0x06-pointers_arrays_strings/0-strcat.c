#include "main.h"
#include <string.h>
#include<stdio.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: first string
 * @src: second string
 *
 * Return:pointer to the resulting string des
 */


char *_strcat(char *dest, char *src)
{

	strcat(dest, src);

	return (dest);
}


