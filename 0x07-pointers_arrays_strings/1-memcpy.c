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

	unsigned int bytes_rem = n;

	for	(unsigned int i = 0; i < n && bytes_rem > 0; i++)
{
	dest[i] = src[i];
	bytes_rem--;
}
return (dest);
}
