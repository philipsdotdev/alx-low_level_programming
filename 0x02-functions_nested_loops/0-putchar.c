#include "main.h"

/**
 * main: program starting point
 *
 * Description: prints with _putchar
 *
 * Return: 0 after execution
 */

int main(void)
{
	int i = 0;
	char c;
	char s[] = "_putchar\n";

	while (i <= 9)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	return (0);
}
