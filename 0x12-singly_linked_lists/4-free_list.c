#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *free_list - Frees a list
 *@head: A pointer to the list head
 *
 */

void free_list(list_t *head)
{
	head = malloc(sizeof(list_t));

	if (head == NULL)
	{
		free(head);
	}
}

