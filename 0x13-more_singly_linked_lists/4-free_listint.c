#include "lists.h"

/**
 * free_listint - free linked list
 * @head: the head of linked list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
