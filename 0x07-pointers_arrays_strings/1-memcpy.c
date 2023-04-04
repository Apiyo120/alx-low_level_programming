#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: memory where it is stored.
 * @src: memory where it is stored.
 * n: number of bytes remaining.
 *
 * Return: the copied memory with n bytes changed.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int d = 0;
	int b = n;

	for	(; s < b; s++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}
