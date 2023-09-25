#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end
 * @head: pointer
 * @n: value for new node (x)
 * Return: pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x = malloc(sizeof(listint_t));
	listint_t *y;

	if (!head || !x)
		return (NULL);

	x->next = NULL;
	x->n = n;
	if (!*head)
		*head = x;
	else
	{
		y = *head;
		while (y->next)
			y = y->next;
		y->next = x;
	}
	return (x);
}
