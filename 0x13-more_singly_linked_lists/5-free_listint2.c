#include "lists.h"

/**
 * free_listint2 - frees a list of ints
 * @head: address of pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *x, *t;

	if (!head)
		return;

	x = *head;
	while (x)
	{
		t = x;
		x = x->next;
		free(t);
	}
	*head = NULL;
}
