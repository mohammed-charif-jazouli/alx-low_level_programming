#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: number to print
 *
 * Return: result
 *
 */

int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	_putchar('0' + digit);
	
	return (digit);
}
