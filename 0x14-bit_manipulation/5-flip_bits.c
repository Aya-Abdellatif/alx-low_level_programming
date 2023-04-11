#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63, counter = 0;
	unsigned long int current;
	unsigned long int exor = n ^ m;

	while (i >= 0)
	{
		current = exor >> i;
		if (current & 1)
			counter++;
		i--;
	}
	return (counter);
}
