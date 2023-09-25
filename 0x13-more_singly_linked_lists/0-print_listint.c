#include "lists.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * print_listint - print content of string
 * @h: the head of linked list
 * Return: the number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
