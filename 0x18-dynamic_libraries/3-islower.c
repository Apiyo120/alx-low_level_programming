#include "main.h"

/**
 *  _islower - function to ptint lower cse
 *
 *  @c: parameter to be printed
 *
 * Return:1 if its a lower case
 * and 0 if its otherwise
*/

int _islower(int c)

{
	if	(c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
