#include <stdio.h>

/**
 * main - entry point
 *
 * Description: c file that prints the first digit of n
 *
 * Return: success - 0
 *
 */

int main(void)
{
	char a = 'a', new_line = '\n';
	for (int i = 0; i < 26;i++)
		putchar(a+i);
	putchar(new_line);
	return (0);
}
