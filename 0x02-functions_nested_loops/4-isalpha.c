#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: character to check
 *
 * Return: alphabet: 1
 *         else    : 0
 *
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
