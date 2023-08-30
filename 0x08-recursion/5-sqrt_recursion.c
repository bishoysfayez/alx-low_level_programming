#include "main.h"

/**
 * _sqrt - finds the square root of an int.
 * @start: start value
 * @root: the square value
 * Return: int value of sqrt if exits
 */
int _sqrt(int start, int root)
{
	if (start > root)
	{
		return (-1);
	}
	else if (start * start == root)
	{
		return (start);
	}

	return (_sqrt(start + 1, root));
}

/**
 * _sqrt_recursion - recursive square root of a number
 * @n: int to get its sqrt
 * Return: int sqrt value if exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(1, n));
}
