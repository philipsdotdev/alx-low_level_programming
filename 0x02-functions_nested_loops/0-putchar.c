#include "main.h"

/**
 * main - print _putchar, then a new line
 *
 * Return: Returns 0 after execution
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
