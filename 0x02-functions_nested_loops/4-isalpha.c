#include "main.h"

/**
 * _islower-Entry point
 * Description: prints if a char is a letter.
 * Return: 0 if c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
