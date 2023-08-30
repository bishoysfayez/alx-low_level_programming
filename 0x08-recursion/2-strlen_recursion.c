#include "main.h"

/**
*  _strlen_recursion-Entry point
*  Description:  get string length.
*  @s : string to get its length
*  Return: int string length (Sucess)
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s += 1;
	return ((_strlen_recursion(s)) + 1);
}
