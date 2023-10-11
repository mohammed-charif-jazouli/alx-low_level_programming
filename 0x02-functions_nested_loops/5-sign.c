#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: number to check
 *
 * Return: positive:  1
 *         negative: -1
 *         zero    :  0
 *
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
}
