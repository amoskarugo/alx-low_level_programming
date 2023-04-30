#include "lists.h"

/**
 * pop_listint - removes the head of the node
 *
 * @head: head node pointer
 *
 * Return: the head node data
*/
int pop_listint(listint_t **head)
{
int node1_data;
listint_t *makeshift, *next;

if (*head == NULL)
	return (0);

makeshift = *head;
next = makeshift->next;
node1_data = makeshift->n;

free(makeshift);
*head = next;

return (node1_data);
}
