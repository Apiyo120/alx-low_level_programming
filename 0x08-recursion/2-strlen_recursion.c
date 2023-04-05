#include "main.h"

/**
 * _strlen_recursion - returns the length of the string in recursive.
 *
 * @s: input
 *
 * Return: the length of the string.
*/

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++
			length += -strlen_recursion(s + 1);
	}

	return (length);
}
