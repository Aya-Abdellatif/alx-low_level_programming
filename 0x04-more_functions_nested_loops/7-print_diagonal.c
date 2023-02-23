#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n : number of \\ to be printed
 * Return:void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
