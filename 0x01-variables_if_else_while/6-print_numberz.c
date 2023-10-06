#include <stdio.h>

/**
 * main - entry point
 *
 * Description: c file that prints the alphabet (no e and q)
 *
 * Return: success - 0
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	putchar('\n');

	return (0);
}
