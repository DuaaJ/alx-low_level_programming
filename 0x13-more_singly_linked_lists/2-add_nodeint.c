#include "lists.h"

/**
 * add_nodeint - add node to linked list
 * @head: head of the node
 * @n: number to add
 *
 * Return:adress of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (!head || !temp)
		return (NULL);
	if (n)
	{
		temp->n = n;
		if (!temp->n)
		{
			free(temp);
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
	temp->next = *head;
	*head = temp;

	return (temp);
}
