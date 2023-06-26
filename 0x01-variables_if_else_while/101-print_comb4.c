#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a <= 57; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			for (c = b + 1; c <= 57; c++)
			{
				if (a != b && b != c && c != a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
				}
				if (a == 55 && b == 56 && c == 57)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
