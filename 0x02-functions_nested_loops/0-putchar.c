#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: print _putchar
 *
 * Return: on success: 0
 *
 */

int main(void)
{
	char string[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(string[i]);
	_putchar('\n');

	return (0);
}
