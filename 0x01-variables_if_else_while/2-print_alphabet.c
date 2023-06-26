#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - use the putchar
 * Return:ALWAYS 0
 */
int main(void)
{
	int b = 97;

	while (b <= 122)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
