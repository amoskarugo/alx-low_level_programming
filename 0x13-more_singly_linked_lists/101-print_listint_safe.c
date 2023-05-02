#include "lists.h"



/**
 * print_listint_safe - print nodes
 * @head: pointer to the head
 * Description: if it fails exits with status code 98
 *
 * Return: node size
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t j, count = 0, size = 5;
	void **ptrs;

	if (!head)
		return (0);

	ptrs = calloc(size, sizeof(void *));
	if (!ptrs)
		exit(98);

	while (head)
	{

		for (j = 0; j < count; j++)
			if (ptrs[j] == (void *)head)
				goto _detected;

		printf("[%p] %d\n", (void *)head, head->n);

		ptrs[count++] = (void *)head;
		head = head->next;

		/* if pointers list is full then reallocate larger memory */
		if (count >= size)
		{
			size += 5;
			ptrs = realloc(ptrs, size * sizeof(void *));
			if (!ptrs)
				exit(98);
		}
	}
	goto done;
_detected:
	printf("-> [%p] %d\n", (void *)head, head->n);
done:
	free(ptrs);
	return (count);
}
