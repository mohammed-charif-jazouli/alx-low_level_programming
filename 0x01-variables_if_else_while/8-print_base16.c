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
	char a = 'a', new_line = '\n';
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	for (i = 0; i < 6; i++)
		putchar(a + i);
	putchar(new_line);

	return (0);
}
