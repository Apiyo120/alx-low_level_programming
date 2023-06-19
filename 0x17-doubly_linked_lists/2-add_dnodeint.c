#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node in the begining of a list.
 * @n: sets the value of the new node.
 * @head: A pointer to the head of a list.
 *
 * Return: The address of the new element or
 * Null if it fails.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if	(newNode == NULL)
	{
		return NULL;
	}

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if	(*head != NULL)
	{
		(*head)->prev = newNode;
	}

	*head = newNode;

	return (newNode);
}
