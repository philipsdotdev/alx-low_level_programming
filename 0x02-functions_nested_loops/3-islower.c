#include "main.h"

/**
 * _islower - checks for lower case letter
 *
 * @c: characters to check
 *
 * Return: Returns 0 after execution
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
