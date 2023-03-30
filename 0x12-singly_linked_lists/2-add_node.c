#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>


/**
 * add_node - adds a node to the linked list
 * @head: pointer to head of linked list to find the size of
 * @str: string to insert into the node of the linked listd
 * Return: number of nodes in the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}
	else
	{tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = *head;

	*head = tmp;
	}

	return (*head);
}
