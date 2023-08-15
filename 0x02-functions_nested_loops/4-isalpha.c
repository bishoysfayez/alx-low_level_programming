#include "main.h"

/**
 * _islower-Entry point
 * Description: prints if a char is a letter.
 * Return: 0 if c is lowercase, 0 if otherwise
 */
int _islower(char c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
