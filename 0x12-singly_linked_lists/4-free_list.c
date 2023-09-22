#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * free_list - free all the linked list
 * @head:head of the linked list
 *
 */

void free_list(list_t *head)
{
	list_t *node, *nnode;

	if (!head)
		return;

	node = head;
	while (node)
	{
		nnode = node->next;
		free(node->str);
		free(node);
		node = nnode;
	}
}
