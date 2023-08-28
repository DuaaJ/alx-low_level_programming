#include "main.h"

/**
 * *_memcpy -  copies memory area.
 *
 * @dest: copy to
 * @src: copy from
 * @n: size
 *
 * Return:the pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
