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
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
