#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: a pointer to the head node
 *
 * Return: the first node
 * else NULL
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nxt, *prev = NULL;

	if (!head)
		return (NULL);

	while (*head)
	{
		nxt = (*head)->nxt;
		(*head)->nxt = prev;
		prev = *head;
		*head = nxt;
	}
	*head = prev;
	return (*head);
}
