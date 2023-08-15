#include "main.h"

/**
 * print_sign-Entry point
 * Description: prints if int n is + or - or 0.
 * @n : int to be checked
 * Return: 0 if 0  -1 if -ve 1 if +ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}

}
