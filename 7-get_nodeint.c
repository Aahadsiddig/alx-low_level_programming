#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index
 * @head: pointer
 * @index: index of node to get
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *x;
	unsigned int n;

	for (x = head, n = 0; x && n < index; x = x->next, n++)
		;
	return (x);
}
