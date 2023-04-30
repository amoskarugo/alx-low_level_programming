#include "lists.h"

/**
 * delete_nodeint_at_index - delete at a given index
 * @head: head node pointer
 * @index: position of node to remove
 *
 * Return: 1 on pass -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	char strt = 0;
	listint_t *p, *node;

	if (!head)
		return (-1);

	strt = !index;
	if (!strt)
		index--;

	p = *head;
	while (p && index--)
		p = p->next;

	if (!p && !strt)
		return (-1);


	node = strt ? *head : p->next;
	if (!node)
		return (-1);
	if (strt)
		*head = node->next;
	else
		p->next = node->next;

	free(node);
	return (1);
}
