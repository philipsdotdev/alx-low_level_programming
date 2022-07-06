#include <stdio.h>

/**
 * main - print the sum of the even-values in a fibonacci
 *
 * Return: 0 after execution
 */

int main(void)
{
	unsigned int a, b, c, d, s;

	a = 1;
	b = 2;
	c = 3;
	s = 2;
	for (d = 2; d <= 32; d++)
	{
		if (c % 2 == 0)
			s = s + c;
		a = b;
		b = c;
		c = a + b;
	}
	printf("%u\n", s);
	return (0);
}
