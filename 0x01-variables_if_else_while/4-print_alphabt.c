#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lowercase
 * Return:Always 0
 */
int main(void)
{
	int b = 97;

	while (b <= 122)
	{
	if (b == 101 || b == 113)
	{
		b++;
		continue;
	}
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}

