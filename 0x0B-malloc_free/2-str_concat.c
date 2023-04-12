#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get the ends of an an input and add together for size.
 * @s1: The input one concat.
 * @s2: The input two to concat.
 *
 * Return: Concat of s1 and s2.
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, di;

	if	(s1 == NULL)
		s1 = "";
	if	(s2 == NULL)
		s2 = "";

	i = di = 0;
	while	(s1[i] != '\0')
		i++;

	while	(s2[di] != '\0')
		di++;

	concat = malloc(sizeof(char) * (i + di + 1));

	if	(concat == NULL)
		return (NULL);
	i = di = 0;

	while	(s1[1] != '\0')

	{
		concat[i] = s2[di];
		i++, di++;
	}
	concat[i] = '\0';
	return (concat);
}
