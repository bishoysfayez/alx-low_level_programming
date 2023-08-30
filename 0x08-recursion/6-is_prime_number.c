#include "main.h"

/**
 * accpets_division-Entry Point.
 * @x : integer to check if it accepts divion over
 * @divisor : the int to check on.
 * Return: int value 0 if accept division -- 1 if not.
 */
int accpets_division(int x, int divisor)
{
	if (x % divisor == 0)
	{
		return (0);
	}
	else if (divisor == x / 2)
	{
		return (1);
	}
	return (accpets_division(x, divisor + 1));
}

/**
 * is_prime_number-Entry Point.
 * @n : integer to check if it is prime or not
 * Return: int value 1 if prime -- 0 if not.
 */
int is_prime_number(int n)
{
	/**
	 * start with divisor 2
	 */
	int divisor = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n <= 3)
	{
		return (1);
	}
	return (accpets_division(n, divisor));
}
