#include "main.h"

/**
 *  print_last_digit-Entry point
 * Description: prints last digit of num n
 * @n : int to be checked
 * Return: last digit value of int n
 */
int print_last_digit(int n)
{
	int k;

	if (n < 0)
	{
		k = -1 * (n % 10);
	}
	else
	{
		k = n % 10;
	}
	_putchar(k + '0');
	return (k);

}
