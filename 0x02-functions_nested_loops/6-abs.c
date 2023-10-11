#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @n: integer to compute
 *
 * Return: result
 *
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
