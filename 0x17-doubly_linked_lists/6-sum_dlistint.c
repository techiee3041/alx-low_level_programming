#include "lists.h"
/**
 * sum_dlistint - finds the sum of all data(n) in a linked list
 * @head: pointer to the first node of the linked list
 * Return: returns sum of data(n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
