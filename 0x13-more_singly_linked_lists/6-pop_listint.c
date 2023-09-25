#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head:the head of the node
 *
 * Return:the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (!head || !*head)
		return (0);
	ptr = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = ptr;
	return (n);

}
