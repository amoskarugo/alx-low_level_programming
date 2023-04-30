#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 *                           a given position
 *
 * @head: pointer to the first node of the list
 * @idx: is the index of the list where the new node should be added
 * @n: element to add to the new node
 *
 * Return: NULL if anything fails or the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *_new, *prev, *current;
	unsigned int i;


	_new = malloc(sizeof(listint_t));
	if (_new == NULL)
		return (NULL);
	_new->n = n;
	_new->next = NULL;

	if (idx == 0)
	{
		_new->next = *head;
		*head = _new;
		return (_new);
	}

	prev = NULL;
	current = *head;
	for (i = 0; i < idx && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}

	if (i < idx)
	{
		free(_new);
		return (NULL);
	}

	prev->next = _new;
	_new->next = current;

	return (_new);
}
