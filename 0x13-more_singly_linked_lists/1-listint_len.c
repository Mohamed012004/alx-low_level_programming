#include "lists.h"

/**
 * listint_len - prints all the elements of a listint_t list.
 *
 * @h: pointer of structure.
 *
 * Return: numbers of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
