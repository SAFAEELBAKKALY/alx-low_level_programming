#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int b = 48;

	while (b <= 57)
	{
		putchar(b);
		if (b == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		b++;
	}
	putchar('\n');
	return (0);
}

