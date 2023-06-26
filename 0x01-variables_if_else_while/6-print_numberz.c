#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int b = 0;

	while (b < 10)
	{
		putchar(b + 48);
		b++;
	}
	putchar('\n');
	return (0);
}
