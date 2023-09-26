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

	temp = *head;
	*head = NULL;

	while (temp)
	{
		tem = temp->next;
		temp->next = *head;
		*head = temp;
		temp = tem;
	}
	return (*head);
}
