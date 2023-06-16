#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a linked list.
 * @h: pointer to the number of nodes printed
 *
 * Return: The number of nodes printed.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t p = 0;

	while (h)
	{
		if	(!h->data)
			printf("[0] (mil)\n");
		else
			printf("[%u] %p\n", h->len, h->data);
		h = h->next;
		p++;
	}

	return (p);
}
