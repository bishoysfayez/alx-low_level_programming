#include "main.h"

/**
 * _abs -Entry point
 * Description: prints abd value of int n
 * @n : int to be checked
 * Return: abd value of int n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (n);
	}

}
