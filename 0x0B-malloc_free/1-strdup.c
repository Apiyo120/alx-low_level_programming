#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new a new memory space location.
 * @str: char
 *
 * Return: 0
*/

char *_strdup(char *str)
{
	char *see;
	int i, j = 0;

	if	(str == NULL)
		return (NULL);

	i = 0;
	while	(str[i] != '\0')
		i++;

	see = malloc(sizeof(char) * (i + 1));

	if	(see == NULL)
		return (NULL);

	for	(j = 0; str[j]; j++)
		see[j] = str[j];

	return (see);
}
