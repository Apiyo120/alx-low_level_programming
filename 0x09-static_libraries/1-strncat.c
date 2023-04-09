#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int q;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	q = 0;
	while (q < n && src[q] != '\0')
	{
	dest[i] = src[q];
	i++;
	q++;
	}
	dest[i] = '\0';
	return (dest);
}
