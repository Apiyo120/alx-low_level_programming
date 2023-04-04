#include "main.h"
/**
 * _strstr - locate a substring within a string.
 * @haystack: The input.
 * @needle: The input
 *
 * Return: if a substring is found, a pointer to the beginning of the substring is returned.
 * if the substring is not found, Null is returned.
 *
*/

char *_strstr(char *haystack, char *needle)
{
	for	(; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *l = needle;

		while	(*h == l && *l != '\0')
		{
			h++;
			l++;
		}
		if	(*l == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
