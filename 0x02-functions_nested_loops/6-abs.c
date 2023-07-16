#include "main.h"

/**
 * _abs - calculate the absolute value of an int.
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n == '-')
	{
		n = n * -1;
		return (n);
	}
}
