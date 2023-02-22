#include "main.h"

/**
* print_alphabet_x10 - prints alphabets in lower case 10 times
*
*/

void print_alphabet_x10(void)
{
	int i;
	char ch;

	ch = 'a';

	for (i = 0; i < 10; i++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		ch = 'a';
		_putchar('\n');
	}
}
