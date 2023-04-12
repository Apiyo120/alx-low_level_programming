#include "main.h"
#include <stdlib.h>

/**
 * create_array - createan array of size, size and assign char c.
 * @size: Size of an array.
 * @c: Char to assign.
 * Description: Create an array of ize size and assign char c.
 *
 * Return: Pointer to array, NULL if it fails.
*/

char *create_array(unsigned int size, char c);
{
	char *str;
	unsigned int i;

	stry = malloc(sizeof(char) * size);
	if	(size == 0 || str == NULL)
		return (NULL);
	for	(i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
