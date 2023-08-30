#include "main.h"

/**
*  factorial-Entry point
*  Description:  get factorial of positive int.
*  @n : int to get its length
*  Return: int the factorial quotient (Sucess)
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
