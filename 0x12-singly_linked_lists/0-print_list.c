#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


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
			printf("[%ld] %s\n", strlen(h->str), "(nil)");
		else
			 printf("[%ld] %s\n", strlen(h->str), h->str);
		count++;
		h = h->next;
	}
	return (coun);
}
