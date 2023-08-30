#include "main.h"

/**
*  _strlen_recursion-Entry point
*  Description:  prints string reversed.
*  @s : string to be printed
*  Return: void (Sucess)
*/
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (count);
	}
	count++;
	_strlen_recursion(s + 1);
}
