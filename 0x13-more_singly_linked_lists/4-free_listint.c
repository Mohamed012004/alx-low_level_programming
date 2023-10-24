#include "lists.h"

/**
 * free_listint - free a listint_t list.
 * @head: pointer to first node.
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
