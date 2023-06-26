#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 *
 * @s:input
 */
void print_rev(char *s)
{
	int i, j, a;

	i = 0;
	while (s[i] != '\0')
		i++;
	a = i;
	for (j = a - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
