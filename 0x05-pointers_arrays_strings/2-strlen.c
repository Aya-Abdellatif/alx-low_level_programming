#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string to check
 *
 * Return: int length of the string
 */

int _strlen(char *s)
{
	int l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}
