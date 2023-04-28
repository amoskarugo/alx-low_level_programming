#include "list.h"

/**
*print_list - it prints all the elements of a linked list
*@h: head node
*Return: number of node
*/

size_t print_list(const list_t *h)
{
	const list_t *focus = h;

	size_t count = 0;

	while (focus != NULL)
	{
		if (focus != NULL)
			printf("[%d] %s\n", focus->len, focus->str);
		else
			printf("[0] (nil)\n");

		count += 1;
		focus = fucus->next;
	}
}
