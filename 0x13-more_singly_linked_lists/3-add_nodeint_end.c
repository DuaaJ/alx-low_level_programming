#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: the head of the node
 * @n: number to in node
 *
 * Return:adress of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

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
		temp->next = NULL;

		if (ptr)
		{
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = temp;
		}
		else
		{
			*head = temp;
		}
	}
	else
	{
		return (NULL);
	}
	return (temp);
}
