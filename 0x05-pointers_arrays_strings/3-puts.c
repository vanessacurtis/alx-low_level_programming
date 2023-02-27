#include "main.h"

/**
 * _puts - prints out a string to stdout
 * @str: pointer to the string to print
 */

void _puts(char *str)
{
	int i;

	i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
