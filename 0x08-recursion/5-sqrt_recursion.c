#include "main.h"

/**
 *  _sqrt_recursion - returns the natural square root of a number.
 *
 *  @n: input
 *
 *  Return: natural square root number.
*/

int _sqrt_recursion(int n)
{
	if	(n < 0)

	return (-1);

	return (actual_sqrt_recursion(n, 0));
}

/**
 * atual_sqrt_recursiion - recurses to find
 * the actual square root of a number
 * @n: input.
 * @r: iterator.
 *
 * return: the actual square root.
*/

int actual_sqrt_recursion(int n, int r)
{
	if	(r * r > n)
		return (-1);
	if	(r * r == n)
		return (r);

	return (actual_sqrt_recursion(n, r + 1));
}
