#include "lists.h"

/**
 * free_listint - frees the list
 * @head: head node pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *in;

	while (head != NULL)
	{
		in = head;
		head = head->next;
		free(in);
	}
}
