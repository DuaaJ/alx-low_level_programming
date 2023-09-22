#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - the length
 * @st:string
 *
 * Return:the length
 */

int _strlen(char *st)
{
	int n = 0;

	if (!st)
		return (0);
	while (*st++)
		n++;
	return (n);
}


/**
 * print_list - print contain of list
 * @h:head of linked list
 *
 * Return:number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t coun = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", _strlen(h->str), "(nil)");
		else
			 printf("[%d] %s\n", _strlen(h->str), h->str);
		coun++;
		h = h->next;
	}
	return (coun);
}
