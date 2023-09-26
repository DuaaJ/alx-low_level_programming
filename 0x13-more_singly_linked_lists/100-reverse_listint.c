#include "lists.h"

/**
 * reverse_listint - reverse the linked list
 * @head:the head of the linked list
 *
 * Return:first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *tem = NULL;

	if (!head || !*head)
		return (NULL);

	while (*head != NULL)
	{
		tem = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = tem;
	}
	*head = temp;

	return (*head);
}
