#include <stdio.h>
/**
 * main -  prints the sum of the even-valued terms, followed by a new line.
 * Return: 0
 */
int main(void)
{
	long int sum = 0, SUM = 0, a = 0, b = 1;

	while (sum < 4000000)
	{
		sum = a + b;
		if (sum % 2 == 0)
		{
			SUM = SUM + sum;
		}
		a = b;
		b = sum;
	}
	printf("%li\n", SUM);
	return (0);
}
