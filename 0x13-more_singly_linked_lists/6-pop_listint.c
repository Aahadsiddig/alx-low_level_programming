#include "lists.h"

/**
 * pop_listint - pops head node of lists
 * @head: address of pointer
 * Return: value of popped node
 */

int pop_listint(listint_t **head)
{
	listint_t *x;
	int n;

	if (!head || !*head)
		return (0);

	x = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = x;
	return (n);
}
