#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *
 * @n: integer to compute
 *
 * Return: n after execution
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
	{
		n *= -1;
		return (n);
	}
}
