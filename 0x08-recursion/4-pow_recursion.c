#include "main.h"

/**
*  _pow_recursion-Entry point
*  Description:  get quotient of int x to the power of int y.
*  @x : int basis
*  @y : int exponent
*  Return: int the quotient (Sucess)
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));

}
