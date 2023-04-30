#include "lists.h"

/**
 * get_nodeint_at_index - It returns the node at a certain index in the  linked list.
 * @head: The first node in the linked list.
 * @index: The index of the node to return.
 *
 * Return: Pointer to the node we are looking for, or NULL.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *temp = head;

	while (temp && k < index)
	{
		temp = temp->next;
		k++;
	}

	return (temp ? temp : NULL);
}
