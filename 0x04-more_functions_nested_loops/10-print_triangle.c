#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = size - i - 1; j > 0; j--)
			{
				_putchar(' ');
			}
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
