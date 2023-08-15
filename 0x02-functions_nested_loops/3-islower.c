#include "main.h"

/**
 * _islower-Entry point
 * Description: prints if lowercase char.
 * Return: 1 if c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
