#include "main.h"

/**
 * print_numbers - rints the numbers, from 0 to 9, followed by a new line.
 * Returns: 0
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
