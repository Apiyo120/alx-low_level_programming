#include <unistd.h>

/**
 * _putchar	-	-writes character c to std out
 * @c: the character to print
 *
 * Return: On success 1.
 * on error, -1 is returned and err no is set appropriately.
*/
int  _putchar(char c)
{
	return (write(1, &c, 1));
}
