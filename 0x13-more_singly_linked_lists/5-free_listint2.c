#include "lists.h"

/**
 * free_listint2 - free linked list
 * @head: the head of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *ptr;

	if (!head)
		return;

	ptr = *head;
	while (ptr)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
	*head = NULL;
}
