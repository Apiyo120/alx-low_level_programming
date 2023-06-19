#include "main.h"

/**
 * _memset -fill a block of memory with a particular value
 * @s: starting address of the memory to be filled.
 * @b: desired value
 * @n: number of bytes that will be changed.
 *
 * Return: the changed array with new values for n bytes.
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for	(;n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
