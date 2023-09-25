#include "lists.h"

/**
 * get_nodeint_at_index - node at specific index
 * @head:the head of the node
 * @index:the index of the node
 *
 * Return: the nth node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int ind;

	ptr = head;
	ind = 0;
	while (ptr && ind < index)
	{
		ptr = ptr->next;
		ind++;
	}
	return (ptr);
}
