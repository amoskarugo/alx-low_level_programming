#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list t
 * @head: pointer to the head node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current_node, *next;

	current_node = head;
	while (current_node != NULL)
	{
		next = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next;
	}

}
