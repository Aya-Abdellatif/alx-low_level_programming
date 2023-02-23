#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return:void
 */

void more_numbers(void)
{
	int i;
	int j;
	int c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			c = j;
			if (j > 9)
			{
				_putchar('1');
				c = j % 10;
			}
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
