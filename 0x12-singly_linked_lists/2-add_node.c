#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * add_node - add node
 * @head:the head of the node
 * @str:the string
 *
 * Return:the address of the new
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

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
	}
	else
	{
		return (NULL);
	}
	temp->next = *head;
	*head = temp;

	return (temp);
}

