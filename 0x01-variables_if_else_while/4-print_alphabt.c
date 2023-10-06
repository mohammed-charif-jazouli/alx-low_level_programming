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
	char a = 'a', new_line = '\n';
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 4 && i != 16)
			putchar(a + i);
	}
	putchar(new_line);

	return (0);
}
