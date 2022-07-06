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
	char c[] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');

	return (0);
}
