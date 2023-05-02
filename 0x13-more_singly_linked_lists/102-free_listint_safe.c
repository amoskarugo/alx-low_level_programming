#include "lists.h"

/**
 * free_listint_safe - free all nodes
 * @h: pointer to the pointer of the first node
 *
 * Return: the size of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 5, count = 0, j;
	listint_t *node;
	void **ptrs;

	ptrs = calloc(size, sizeof(void *));
	if (!ptrs)
		return (0);

	while (h && *h)
	{
		node = *h;
		for (j = 0; j < count; j++)
			if (node == ptrs[j])
				goto end;
		ptrs[count++] = node;
		*h = node->next;
		node->next = NULL;
		free(node);
		if (count >= size)
		{
			size += 5;
			ptrs = realloc(ptrs, size * sizeof(void *));
			if (!ptrs)
				return (0);
		}
	}
end:
	*h = NULL;
	free(ptrs);
	return (count);
}
