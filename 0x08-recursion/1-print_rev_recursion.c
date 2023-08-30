#include "main.h"

/**
*  _print_rev_recursion-Entry point
*  Description:  prints string reversed.
*  @s : string to be printed
*  Return: void (Sucess)
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
