#include <stdio.h>

/**
 * main - entry point
 *
 * Description: c file that prints the alphabet
 *
 * Return: success - 0
 *
 */

int main(void)
{
	char z = 'z', new_line = '\n';
	int i;

	for (i = 0; i < 26; i++)
		putchar(z - i);
	putchar(new_line);

	return (0);
}
