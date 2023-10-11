#include "main.h"

/**
 * times_table - print the 9 times table, starting with 0
 *
 * Return: void
 *
 */

void times_table(void)
{
	int i, j, mult, d1, d2, d3;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mult = i * j;
			d1 = (mult - (mult % 100)) / 100;
			d2 = ((mult % 100) - (mult % 10)) / 10;
			d3 = i % 10;
			if (d1 == 0)
				_putchar(' ');
			else
				_putchar('0' + d1)
			if (d2 == 0)
				_putchar(' ');
			else
				_putchar('0' + d2)
			_putchar('0' + d3);
			_putchar(',');

		}
		_putchar('\n');
	}
}
