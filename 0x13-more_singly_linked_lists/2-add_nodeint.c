#include "lists.h"

/**
 * add_nodeint - adds a node to the top
 * @head: pointer
 * @n: value for new node
 * Return: pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x = malloc(sizeof(listint_t));

	if (!head || !x)
		return (NULL);

	x->next = NULL;
	x->n = n;
	if (*head)
		x->next = *head;
	*head = x;
	return (x);
}
