#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - It returns the number of elements in a list.
 * @h: points to the first  node in the list.
 *
 * Return: The number of elements printed.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
