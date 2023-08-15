#include "main.h"

/**
 *  print_last_digit-Entry point
 * Description: prints last digit of num n
 * @n : int to be checked
 * Return: last digit value of int n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n % 10);
	}
	else
	{
		return (n % 10);
	}

}
