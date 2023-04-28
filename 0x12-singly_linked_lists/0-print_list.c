#include "lists.h"

/**
*print_list - it prints all the elements of a linked list
*@h: head node
*Return: number of node
*/

size_t print_list(const list_t *h)
{

	size_t count = 0;

	while (h != NULL)
	{
		if (h->str !=  NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		count += 1;
		h = h->next;
	}
}
