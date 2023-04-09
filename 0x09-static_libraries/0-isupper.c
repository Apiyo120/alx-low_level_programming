#include "main.h"
/**
 * _isupper - print uppercase leters.
 * @c: char is to check.
 *
 * Rerturn: 0 or 1.
*/

int _isupper(int c)
{
	if	(c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
