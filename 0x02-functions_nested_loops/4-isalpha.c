#include "main.h"

/**
 * _isalpha-Entry point
 * Description: prints if an int c is a letter.
 * @c : char to be checked
 * Return: 0 if c is lowercase, 0 if otherwise
 */
int _isalpha(int c)
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
