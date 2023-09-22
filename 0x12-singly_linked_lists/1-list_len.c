#include"lists.h"

/**
 * list_len - length of the list
 * @h: the head of the list
 *
 * Return: the length
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}

