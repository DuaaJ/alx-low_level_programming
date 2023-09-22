#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * print_list - print contain of list
 * @h:head of linked list
 * Return:number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t coun = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		coun++;
		h = h->next;
		return (coun);
	}
}
