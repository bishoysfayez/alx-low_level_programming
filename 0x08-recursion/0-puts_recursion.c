#include "main.h"

/**
*  _puts_recursion-Entry point
*  Description:  prints string
*  @s : string to be printed
*  Return: void (Sucess)
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
