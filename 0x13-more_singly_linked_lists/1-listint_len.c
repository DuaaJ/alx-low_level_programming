#include "lists.h"

/**
 * listint_len - return element in linked l
 * @h:head of linked list
 *
 * Return:number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
