#include "lists.h"

/**
 * free_listint - frees a list of ints
 * @head: pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *x;

	while (head)
	{
		x = head;
		head = head->next;
		free(x);
	}
}
