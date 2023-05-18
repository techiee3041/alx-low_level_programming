#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - function that adds a node at the beginning of a list
 * @head: pointer to the first node of a linked list
 * @n: node to add
 * Return: returns the address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
