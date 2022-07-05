#include "main.h"

/**
 * main: program starting point
 *
 * description: prints with _putchar
 *
 * return: 0 after execution
 */

int main(void)
{
	int i = 0;
	char c;
	char s[] = "Alx School\n";

	while (i <= 9)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	return (0);
}
