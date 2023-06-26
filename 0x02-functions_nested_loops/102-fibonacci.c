#include <stdio.h>
/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	long int sum = 0, a = 0, b = 1;
	int num = 0;

	while (num < 49)
	{
		sum = a + b;
		printf("%li, ", sum);
		a = b;
		b = sum;
		num++;
	}
	sum = a + b;
	printf("%li\n", sum);
	return (0);
}
