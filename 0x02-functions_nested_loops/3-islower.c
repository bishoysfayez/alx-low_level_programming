#include "main.h"

/**
 * _islower-Entry point
 * Description: prints if lowercase int c is a char.
 * @c : char to be checked
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
