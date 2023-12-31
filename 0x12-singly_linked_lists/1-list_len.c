#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t coll = 0;

	while (h)
	{
		coll++;
		h = h->next;
	}
	return (coll);
}

