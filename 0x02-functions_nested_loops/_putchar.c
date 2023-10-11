#include <unistd.h>
#include "main.h"

/**
 * _putchar - write character c to stdout
 * @c: character to print
 *
 * Return: on success:  0
 *         on error  : -1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
