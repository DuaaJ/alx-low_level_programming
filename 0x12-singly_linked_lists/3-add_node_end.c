#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * add_node_end - add a nodeat the end
 * @head:the start of node
 * @str:string to add
 *
 * Return:address of the added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *ptr = *head;

	if (!head || !temp)
		return (NULL);
	if (str)
	{
		temp->str = strdup(str);
		if (!temp->str)
		{
			free(temp);
			return (NULL);
		}
		temp->len = strlen(temp->str);
		temp->next = NULL;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	else
	{
		return (NULL);
	}
	return (temp);
}
